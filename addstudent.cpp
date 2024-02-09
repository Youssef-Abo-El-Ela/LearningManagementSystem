#include "iostream"
#include "addstudent.h"
#include "ui_addstudent.h"
#include <QPixmap>
#include "student.h"
AddStudent::AddStudent(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddStudent)
{
    ui->setupUi(this);
    QPixmap pix("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/LearningManagementSystem/Pics/Background.png");
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
}

