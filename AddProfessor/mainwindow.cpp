#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("D:/MIDPROJECT/Pics/Background");
    ui->Background_label->setPixmap(pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}
