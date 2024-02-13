#include "show.h"
#include "showclasses.h"
#include "ui_show.h"

Show::Show(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Show)
{
    ui->setupUi(this);
    QPixmap pic("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/Pics/Background.png");
    ui->backgroundimage->setPixmap(pic);
}

Show::~Show()
{
    delete ui;
}

void Show::on_classes_clicked()
{
    QWidget *classes = new ShowClasses;
    this->hide();
    classes->show();
}

