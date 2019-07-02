#include "mainwindow.h"
#include <QApplication>
#include <QMessageBox>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QMessageBox msgBox;
    msgBox.setWindowTitle("qttest");
    msgBox.setText("Continue program?");
    msgBox.setStandardButtons(QMessageBox::Yes);
    msgBox.addButton(QMessageBox::No);
    msgBox.setDefaultButton(QMessageBox::No);
    if(msgBox.exec() == QMessageBox::Yes){
      // do something
    }else {
      return 0;
    }

    MainWindow w;
    w.show();

    return a.exec();
}
