#include "addclass.h"
#include "globals.h"
#include "ui_addclass.h"
#include <QPixmap>
#include "subject.h"
#include "edit.h"
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

    classes.push_back(subj);
}



void AddClass::on_back_button_clicked()
{
    QWidget *edt = new Edit ;
    this->hide();
    edt->show();
}

