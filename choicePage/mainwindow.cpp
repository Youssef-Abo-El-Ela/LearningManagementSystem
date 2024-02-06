#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap Pix("D:/MIDPROJECT/Pics/Background");
    ui->choice_label->setPixmap(Pix);
}

MainWindow::~MainWindow()
{
    delete ui;
}
