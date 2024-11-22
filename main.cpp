#include <QApplication>
#include "app.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    App mainWindow;
    mainWindow.show();
    return app.exec();
}