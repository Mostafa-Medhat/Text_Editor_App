/********************************************************************************
** Form generated from reading UI file 'TextEditor_UIkoRWwH.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef TEXTEDITOR_UIKORWWH_H
#define TEXTEDITOR_UIKORWWH_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionSave_As;
    QAction *actionCopy;
    QAction *actionCut;
    QAction *actionPaste;
    QAction *actionIncrease_Font;
    QAction *actionDecrease_Font;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuFormat;
    QMenu *menuView;
    QMenu *menuHelp;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *TextWindow)
    {
        if (TextWindow->objectName().isEmpty())
            TextWindow->setObjectName(QStringLiteral("TextWindow"));
        TextWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/text_editor.png"), QSize(), QIcon::Normal, QIcon::Off);
        TextWindow->setWindowIcon(icon);
        actionNew = new QAction(TextWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon1);
        actionOpen = new QAction(TextWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon2);
        actionSave = new QAction(TextWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon3);
        actionSave_As = new QAction(TextWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/save as.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon4);
        actionCopy = new QAction(TextWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionCut = new QAction(TextWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon6);
        actionPaste = new QAction(TextWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon7);
        actionIncrease_Font = new QAction(TextWindow);
        actionIncrease_Font->setObjectName(QStringLiteral("actionIncrease_Font"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/Increase Font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncrease_Font->setIcon(icon8);
        actionDecrease_Font = new QAction(TextWindow);
        actionDecrease_Font->setObjectName(QStringLiteral("actionDecrease_Font"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/Decrease Font.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDecrease_Font->setIcon(icon9);
        centralwidget = new QWidget(TextWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        QFont font;
        font.setPointSize(10);
        plainTextEdit->setFont(font);

        gridLayout->addWidget(plainTextEdit, 0, 0, 1, 1);

        TextWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuFormat = new QMenu(menubar);
        menuFormat->setObjectName(QStringLiteral("menuFormat"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QStringLiteral("menuView"));
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName(QStringLiteral("menuHelp"));
        TextWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(TextWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TextWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(TextWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy);
        toolBar->setMinimumSize(QSize(0, 35));
        TextWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuFormat->menuAction());
        menubar->addAction(menuView->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        toolBar->addAction(actionNew);
        toolBar->addSeparator();
        toolBar->addAction(actionOpen);
        toolBar->addSeparator();
        toolBar->addAction(actionSave);
        toolBar->addSeparator();
        toolBar->addAction(actionSave_As);
        toolBar->addSeparator();
        toolBar->addAction(actionCopy);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addSeparator();
        toolBar->addAction(actionPaste);
        toolBar->addSeparator();
        toolBar->addAction(actionIncrease_Font);
        toolBar->addSeparator();
        toolBar->addAction(actionDecrease_Font);

        retranslateUi(TextWindow);

        QMetaObject::connectSlotsByName(TextWindow);
    } // setupUi

    void retranslateUi(QMainWindow *TextWindow)
    {
        TextWindow->setWindowTitle(QApplication::translate("TextWindow", "Text Editor", nullptr));
        actionNew->setText(QApplication::translate("TextWindow", "New", nullptr));
#ifndef QT_NO_STATUSTIP
        actionNew->setStatusTip(QApplication::translate("TextWindow", "Create New Text File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionNew->setShortcut(QApplication::translate("TextWindow", "Ctrl+N", nullptr));
#endif // QT_NO_SHORTCUT
        actionOpen->setText(QApplication::translate("TextWindow", "Open", nullptr));
#ifndef QT_NO_STATUSTIP
        actionOpen->setStatusTip(QApplication::translate("TextWindow", "Open A Text File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionOpen->setShortcut(QApplication::translate("TextWindow", "Ctrl+O", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave->setText(QApplication::translate("TextWindow", "Save", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSave->setStatusTip(QApplication::translate("TextWindow", "Save Current Text File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_SHORTCUT
        actionSave->setShortcut(QApplication::translate("TextWindow", "Ctrl+S", nullptr));
#endif // QT_NO_SHORTCUT
        actionSave_As->setText(QApplication::translate("TextWindow", "Save As", nullptr));
#ifndef QT_NO_STATUSTIP
        actionSave_As->setStatusTip(QApplication::translate("TextWindow", "Save Current Text as a Text File", nullptr));
#endif // QT_NO_STATUSTIP
#ifndef QT_NO_WHATSTHIS
        actionSave_As->setWhatsThis(QApplication::translate("TextWindow", "Save as action button", nullptr));
#endif // QT_NO_WHATSTHIS
        actionCopy->setText(QApplication::translate("TextWindow", "Copy", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCopy->setShortcut(QApplication::translate("TextWindow", "Ctrl+C", nullptr));
#endif // QT_NO_SHORTCUT
        actionCut->setText(QApplication::translate("TextWindow", "Cut", nullptr));
#ifndef QT_NO_SHORTCUT
        actionCut->setShortcut(QApplication::translate("TextWindow", "Ctrl+X", nullptr));
#endif // QT_NO_SHORTCUT
        actionPaste->setText(QApplication::translate("TextWindow", "Paste", nullptr));
#ifndef QT_NO_SHORTCUT
        actionPaste->setShortcut(QApplication::translate("TextWindow", "Ctrl+V", nullptr));
#endif // QT_NO_SHORTCUT
        actionIncrease_Font->setText(QApplication::translate("TextWindow", "Increase Font", nullptr));
#ifndef QT_NO_SHORTCUT
        actionIncrease_Font->setShortcut(QApplication::translate("TextWindow", "Ctrl+Shift+.", nullptr));
#endif // QT_NO_SHORTCUT
        actionDecrease_Font->setText(QApplication::translate("TextWindow", "Decrease Font", nullptr));
#ifndef QT_NO_SHORTCUT
        actionDecrease_Font->setShortcut(QApplication::translate("TextWindow", "Ctrl+Shift+,", nullptr));
#endif // QT_NO_SHORTCUT
        menuFile->setTitle(QApplication::translate("TextWindow", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("TextWindow", "Edit", nullptr));
        menuFormat->setTitle(QApplication::translate("TextWindow", "Format", nullptr));
        menuView->setTitle(QApplication::translate("TextWindow", "View", nullptr));
        menuHelp->setTitle(QApplication::translate("TextWindow", "Help", nullptr));
        toolBar->setWindowTitle(QApplication::translate("TextWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextWindow: public Ui_TextWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // TEXTEDITOR_UIKORWWH_H
