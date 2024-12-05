#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include <QLabel>
#include <QMessageBox>
#include <QTextStream>
#include <QFileDialog>
#include "ui_TextEditor_UI.h" // Include the generated UI header

class App : public QMainWindow
{
    Q_OBJECT // Macro required for signal-slot functionality

        public : explicit App(QWidget *parent = nullptr);

private slots:
    void new_textFile();
    void open_textFile();
    bool save_textFile();
    bool save_as_textFile();
    void copy_text();
    void cut_text();
    void paste_text();
    void increase_font();
    void decrease_font();


private:
    Ui::TextWindow ui; // UI object from the generated header
    int fontSize;
    int windowSize;
    int init_fontSize; 
    int init_windowSize;
    int fontSize_change = 1;

    QString currentFile;  // Stores the current file path
    bool isTextModified;  // Tracks if the text was modified

    QTextCursor cursor;
    QLabel *windowStatus = new QLabel(tr("%1 %").arg(windowSize));

    void App::init_connections();
    void App::update_font(int fontSize);

};


#endif // APP_H