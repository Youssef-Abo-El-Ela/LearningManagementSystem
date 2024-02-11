#include "addclass.h"
#include "ui_addclass.h"
#include <QPixmap>
#include <iostream>
#include "subject.h"
using namespace std;

AddClass::AddClass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddClass)
{
    ui->setupUi(this);
    QPixmap pic("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/Pics/Background.png");
    ui->background_image->setPixmap(pic);
}

AddClass::~AddClass()
{
    delete ui;
}

void AddClass::on_class_submit_clicked()
{
    string class_name = this->ui->classname_text->text().toStdString();
    string class_code = this->ui->classcode_text->text().toStdString();
    string class_lecturehall = this->ui->classlecturehall_text->text().toStdString();
    string class_time = this->ui->timeEdit->text().toStdString();
    Subject subj(class_name,class_code,class_lecturehall,class_time);
    Subject sub1("Abc","SBE2003","3333","1PM");
    Subject sub2("AdC","SbE2003","6633","2PM");
    Subject sub3("FGC","SBE3003","3223","3PM");

    classes.push_back(sub1);
    classes.push_back(sub2);
    classes.push_back(sub3);
}


