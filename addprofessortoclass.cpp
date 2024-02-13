#include "addprofessortoclass.h"
#include "ui_addprofessortoclass.h"
#include "subject.h"
#include "professor.h"
#include "addclass.h"
#include "addprofessor.h"
using namespace std;
#include <iostream>
addprofessortoclass::addprofessortoclass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addprofessortoclass)
{
    ui->setupUi(this);
}

addprofessortoclass::~addprofessortoclass()
{
    delete ui;
}

void addprofessortoclass::on_submit_button_clicked()
{
    string prof_first_name=ui->firstname_text->text().toStdString();
    string prof_last_name=ui->secondname_text->text().toStdString();

    Subject sub1("Abc","SBE2003","3333","1PM");
    Subject sub2("Adc","SbE2003","6633","2PM");
    Subject sub3("Fgf","SBE3003","3223","3PM");

    classes.push_back(sub1);
    classes.push_back(sub2);
    classes.push_back(sub3);

    string cls_name=ui->clasname->text().toStdString();

    bool flag=0;
    for (int i=0;i<classes.size();i++){
        cout<<classes.size();
        cout<<classes[i].name;
        if (classes[i].name==cls_name){
            flag=1;
        }
    }
    Subject cls("Abc","SBE2003","3333","1PM");
    if (flag){

        cls.define_sub_prof(prof_first_name+prof_last_name);
        cout<<cls.teaching_professors[0];
    }
    else{
        cout<<"ENTER EXISTING CLASS"<<'\n';
    }


}
