#include "iostream"
#include "addstudent.h"
#include "ui_addstudent.h"
#include <QPixmap>
AddStudent::AddStudent(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddStudent)
{
    ui->setupUi(this);
    QPixmap pix("D:/MIDPROJECT/LearningManagementSystem/Pics/Background");
    ui->background_img->setPixmap(pix);
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
    cout<<students[0].f_name<<'\n';
}

