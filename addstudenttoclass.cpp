#include "addstudenttoclass.h"
#include "globals.h"
#include "ui_addstudenttoclass.h"
#include "subject.h"
#include "student.h"
#include "addclass.h"
#include "addstudent.h"
#include "edit.h"
#include <iostream>
AddStudentToClass::AddStudentToClass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddStudentToClass)
{
    ui->setupUi(this);
    QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/showss");
    ui->background_image->setPixmap(pic);
}


AddStudentToClass::~AddStudentToClass()
{
    delete ui;
}

void AddStudentToClass::on_submit_button_clicked()
{
    string stud_first_name=ui->firstname_text->text().toStdString();
    string stud_last_name=ui->secondname_text->text().toStdString();

    string grade = ui->grade_text->text().toStdString();

    string cls_name=ui->clasname->text().toStdString();
    bool flag=0;
    int pos = 0;
    for (unsigned int i=0;i<classes.size();i++){
        if (classes[i].name==cls_name){
            flag=1;
            pos = i;
        }
    }
    if (flag){
        classes[pos].define_sub_stud(stud_first_name+stud_last_name,grade);
    }
    else{
        cout<<"ENTER EXISTING CLASS"<<'\n';
    }

}


void AddStudentToClass::on_pushButton_clicked()
{
    QWidget *edt = new Edit ;
    this->hide();
    edt->show();
}

