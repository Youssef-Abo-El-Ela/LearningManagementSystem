#include "showclass.h"
#include "ui_showclass.h"
#include "addclass.h"
#include "addstudent.h"
#include "student.h"
#include <QPixmap>
#include "addprofessor.h"
#include "professor.h"
#include "addclass.h"
#include "subject.h"

ShowClass::ShowClass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowClass)
{
    ui->setupUi(this);
    QPixmap pix("D:/MIDPROJECT/LearningManagementSystem/Pics/Background");
    ui->background_img->setPixmap(pix);
}

ShowClass::~ShowClass()
{
    delete ui;
}

void ShowClass::on_ok_button_clicked()
{
    Student s1("Ahmed","Essam",20,"01063231932","test@test.com","A+");
    Student s2("Mohamed","Khaled",21,"01223739744","test2@test.com","B+");
    Student s3("Kamel","Raafat",22,"01063739744","test3@test.com","C+");
    students.push_back(s1);
    students.push_back(s2);
    students.push_back(s3);
    Subject sub("Abs","Sbe2203","3201","1PM-3PM");
    sub.teaching_professors.push_back("Ahmed");
    sub.teaching_professors.push_back("Mohamed");
    this->ui->toClass->setText(QString::fromStdString(sub.name));
    this->ui->toLecture->setText(QString::fromStdString(sub.hall));
    this->ui->toTime->setText(QString::fromStdString(sub.time));

    for (unsigned int j=0; j<sub.teaching_professors.size() ; j++){
        this->ui->toProf->setText(QString::fromStdString(sub.teaching_professors[j]));
    }

    for (unsigned int i=0; i<students.size(); i++ )
    {
        this->ui->tableWidget->insertRow(i);
    }
    for (unsigned int r=0; r<students.size(); r++){
        for (unsigned int c=0; c<2;c++){
            if(c==0){
                this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((students[r].f_name+students[r].l_name).c_str()));
            }
            else{
                this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((students[r].grade).c_str()));
            }
        }
    }
}

