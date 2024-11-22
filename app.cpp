#include "app.h"
#include <iostream>
using namespace std;

App::App(QWidget *parent) : QMainWindow(parent), windowSize(100)
{
    ui.setupUi(this);
    ui.statusbar->addPermanentWidget(windowStatus);
    fontSize = ui.plainTextEdit->font().pointSize();

    init_fontSize = fontSize;
    init_windowSize = windowSize;

    // SetUp Signals-Slots Connections
    connect(ui.actionNew, &QAction::triggered, this, &App::new_textFile);
    connect(ui.actionCopy, &QAction::triggered, this, &App::copy_text);
    connect(ui.actionCut, &QAction::triggered, this, &App::cut_text);
    connect(ui.actionPaste, &QAction::triggered, this, &App::paste_text);
    connect(ui.actionIncrease_Font, &QAction::triggered, this, &App::increase_font);
    connect(ui.actionDecrease_Font, &QAction::triggered, this, &App::decrease_font);
}

void App::new_textFile()
{
    ui.plainTextEdit->clear();
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
    }}

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
