#include "addstudent.h"
#include "globals.h"
#include "ui_addstudent.h"
#include <QPixmap>
#include <edit.h>
AddStudent::AddStudent(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddStudent)
{
    ui->setupUi(this);
     QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/showss");
    ui->background_image->setPixmap(pic);
}

AddStudent::~AddStudent()
{
    delete ui;
}

void AddStudent::on_submit_button_clicked()
{
    string stud_first_name=ui->firstname_text->text().toStdString();
    string stud_last_name=ui->secondname_text->text().toStdString();
    int  age =ui->age_text->text().toInt();
    string phone =ui->phone_text->text().toStdString();
    string email =ui->email_text->text().toStdString();
    string grade =ui->grade_text->text().toStdString();
    Student stud(stud_first_name,stud_last_name,age,phone,email,grade);
    students.push_back(stud);
}


void AddStudent::on_pushButton_clicked()
{
    QWidget *edt = new Edit ;
    this->hide();
    edt->show();
}

