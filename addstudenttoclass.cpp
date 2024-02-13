#include "addstudenttoclass.h"
#include "ui_addstudenttoclass.h"
#include "subject.h"
#include "student.h"
#include "addclass.h"
#include "addstudent.h"
#include <iostream>
AddStudentToClass::AddStudentToClass(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AddStudentToClass)
{
    ui->setupUi(this);
}

AddStudentToClass::~AddStudentToClass()
{
    delete ui;
}

void AddStudentToClass::on_submit_button_clicked()
{
    string stud_first_name=ui->firstname_text->text().toStdString();
    string stud_last_name=ui->secondname_text->text().toStdString();
    Subject sub1("Abc","SBE2003","3333","1PM");
    Subject sub2("Adc","SbE2003","6633","2PM");
    Subject sub3("Fgf","SBE3003","3223","3PM");

    classes.push_back(sub1);
    classes.push_back(sub2);
    classes.push_back(sub3);
    string cls_name=ui->clasname->text().toStdString();
    bool flag=0;
    for (unsigned int i=0;i<classes.size();i++){
        cout<<classes.size();
        cout<<classes[i].name;
        if (classes[i].name==cls_name){
            flag=1;
        }
    }
    Subject cls("Abc","SBE2003","3333","1PM");
    if (flag){

        cls.define_sub_stud(stud_first_name+stud_last_name);
        cout<<cls.enrolled_students[0];
    }
    else{
        cout<<"ENTER EXISTING CLASS"<<'\n';
    }

}

