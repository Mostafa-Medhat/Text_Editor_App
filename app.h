#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include "ui_TextEditor_UI.h" // Include the generated UI header
#include <QLabel>

class App : public QMainWindow
{
    Q_OBJECT // Macro required for signal-slot functionality

        public : explicit App(QWidget *parent = nullptr);

private slots:
    void new_textFile();
    // void open_textFile();
    // void save_textFile();
    // void save_as_textFile();
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
    
    QTextCursor cursor;
    QLabel *windowStatus = new QLabel(tr("%1 %").arg(windowSize));
};

#endif // APP_H