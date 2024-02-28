#include "addprofessortoclass.h"
#include "globals.h"
#include "ui_addprofessortoclass.h"
#include "subject.h"
#include "professor.h"
#include "addclass.h"
#include "addprofessor.h"
#include "edit.h"
using namespace std;
#include <iostream>
addprofessortoclass::addprofessortoclass(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addprofessortoclass)
{
    ui->setupUi(this);

    QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/showss");
    ui->background_image->setPixmap(pic);
}

addprofessortoclass::~addprofessortoclass()
{
    delete ui;
}

void addprofessortoclass::on_submit_button_clicked()
{
    string prof_first_name=ui->firstname_text->text().toStdString();
    string prof_last_name=ui->secondname_text->text().toStdString();

    string cls_name=ui->clasname->text().toStdString();
    int position = 0;
    bool flag=0;
    for (unsigned int i=0;i<classes.size();i++){
        if (classes[i].name==cls_name){
            flag=1;
            position = i;
        }
    }


    if (flag){

        classes[position].define_sub_prof(prof_first_name+prof_last_name);

    }
    else{
        cout<<"ENTER EXISTING CLASS"<<'\n';
    }


}


void addprofessortoclass::on_pushButton_clicked()
{
    QWidget *edt = new Edit ;
    this->hide();
    edt->show();
}

