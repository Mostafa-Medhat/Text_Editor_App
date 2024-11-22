#include "app.h"

App::App(QWidget *parent) : QMainWindow(parent), windowSize(100), isTextModified(false), currentFile(QString())
{
    ui.setupUi(this);
    ui.statusbar->addPermanentWidget(windowStatus);
    fontSize = ui.plainTextEdit->font().pointSize();

    init_fontSize = fontSize;
    init_windowSize = windowSize;

    // Setup tracking changes in the plain text widget
    connect(ui.plainTextEdit, &QPlainTextEdit::textChanged, this, [this]()
            { isTextModified = true; });

    // SetUp Signals-Slots Connections
    connect(ui.actionNew, &QAction::triggered, this, &App::new_textFile);
    connect(ui.actionCopy, &QAction::triggered, this, &App::copy_text);
    connect(ui.actionCut, &QAction::triggered, this, &App::cut_text);
    connect(ui.actionPaste, &QAction::triggered, this, &App::paste_text);
    connect(ui.actionIncrease_Font, &QAction::triggered, this, &App::increase_font);
    connect(ui.actionDecrease_Font, &QAction::triggered, this, &App::decrease_font);
    connect(ui.actionSave_As, &QAction::triggered, this, &App::save_as_textFile);
    connect(ui.actionSave, &QAction::triggered, this, &App::save_textFile);
    connect(ui.actionOpen, &QAction::triggered, this, &App::open_textFile);
}

void App::new_textFile()
{
    if (isTextModified) {
        QMessageBox::StandardButton reply = QMessageBox::warning(
            this, tr("Unsaved Changes"),
            tr("The document has unsaved changes. Do you want to save them?"),
            QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel
        );

        if (reply == QMessageBox::Save) {
            if (!save_textFile()) {
                return;  // If save failed, cancel the new action
            }
        } else if (reply == QMessageBox::Cancel) {
            return;  // Do nothing, user canceled the action
        }
    }

    // Clear the editor for a new file
    ui.plainTextEdit->clear();
    currentFile.clear();
    isTextModified = false;
}

void App::open_textFile()
{
    QString fileName = QFileDialog::getOpenFileName(this, tr("Open a text file"), QString(), tr("Text File (*.txt);"));
    if (fileName.isEmpty())
    {
        return; // User canceled save as
    }

     // Open the file for reading
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly | QFile::Text)) {
        QMessageBox::warning(this, tr("Error"), tr("Cannot open file: %1").arg(file.errorString()));
        return;
    }

    // Read the file content into the plain text edit
    QTextStream in(&file);
    QString fileContent = in.readAll();
    ui.plainTextEdit->setPlainText(fileContent);

    currentFile = fileName;
    isTextModified = false;
}

bool App::save_textFile()
{
    if (currentFile.isEmpty())
    {
        return save_as_textFile();
    }

    QFile file(currentFile);
    if (!file.open(QFile::WriteOnly | QFile::Text))
    {
        QMessageBox::warning(this, tr("Error"), tr("Cannot save file: %1").arg(file.errorString()));
        return false;
    }

    QTextStream out(&file);
    out << ui.plainTextEdit->toPlainText();
    file.close();

    isTextModified = false;
    return true;
}

bool App::save_as_textFile()
{
    QString fileName = QFileDialog::getSaveFileName(this, tr("Save As"), QString(), tr("Text Files (*.txt);;All Files (*)"));
    if (fileName.isEmpty())
    {
        return false; // User canceled save as
    }
    currentFile = fileName;
    return save_textFile();
}

void App::copy_text()
{
    cursor = ui.plainTextEdit->textCursor();
    if (cursor.hasSelection())
    {
        // If text is selected, copy the selected text
        ui.plainTextEdit->copy();
    }
    else
    {
        // If no text is selected, select all and copy
        ui.plainTextEdit->selectAll();
        ui.plainTextEdit->copy();
    }
}

void App::cut_text()
{
    cursor = ui.plainTextEdit->textCursor();
    if (cursor.hasSelection())
    {
        // If text is selected, copy the selected text
        ui.plainTextEdit->cut();
    }
    else
    {
        // If no text is selected, select all and copy
        ui.plainTextEdit->selectAll();
        ui.plainTextEdit->cut();
    }
}

void App::paste_text()
{
    ui.plainTextEdit->paste();
}

void App::increase_font()
{
    windowSize = (int)(init_windowSize * ((float)fontSize + 2) / init_fontSize);
    windowStatus->setText(tr("%1 %").arg(windowSize));

    fontSize += 2;
    auto tempFont = ui.plainTextEdit->font();
    tempFont.setPointSize(fontSize);
    ui.plainTextEdit->setFont(tempFont);
}

void App::decrease_font()
{
    windowSize = (int)(init_windowSize * ((float)fontSize - 2) / init_fontSize);
    windowStatus->setText(tr("%1 %").arg(windowSize));

    fontSize -= 2;
    auto tempFont = ui.plainTextEdit->font();
    tempFont.setPointSize(fontSize);
    ui.plainTextEdit->setFont(tempFont);
}
