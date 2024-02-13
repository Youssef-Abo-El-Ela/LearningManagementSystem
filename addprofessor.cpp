#include "addprofessor.h"
#include "ui_addprofessor.h"
#include <QPixmap>
#include <iostream>

using namespace std;
AddProfessor::AddProfessor(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddProfessor)
{
    ui->setupUi(this);
    QPixmap pic("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/LearningManagementSystem/Pics/Background.png");
    ui->background_img->setPixmap(pic);
}

AddProfessor::~AddProfessor()
{
    delete ui;
}

void AddProfessor::on_submit_prof_clicked()
{
    string prof_first_name = ui->first_name_prof_input->text().toStdString();
    string prof_last_name = ui->last_name_prof_input->text().toStdString();
    int age = ui->age_prof_input->text().toInt();
    string phone = ui->phone_prof_input->text().toStdString();
    string email = ui->email_prof_input->text().toStdString();
    string title = ui->title_prof_input->text().toStdString();
    Professor prof(prof_first_name,prof_last_name,age,phone,email,title);
    professors.push_back(prof);
}

