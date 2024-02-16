#include "showstudents.h"
#include "addstudent.h"
#include "ui_showstudents.h"
#include "show.h"

showstudents::showstudents(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::showstudents)
{
    ui->setupUi(this);
}

showstudents::~showstudents()
{
    delete ui;
}

void showstudents::on_pushButton_clicked()
{
    // Student s1("Ahmed","Essam",20,"01063231932","test@test.com","A+");
    // Student s2("Mohamed","Khaled",21,"01223739744","test2@test.com","B+");
    // Student s3("Kamel","Raafat",22,"01063739744","test3@test.com","C+");
    // students.push_back(s1);
    // students.push_back(s2);
    // students.push_back(s3);

    for (unsigned int i=0; i<students.size(); i++ )
    {
        this->ui->tableWidget->insertRow(i);
    }
    for (unsigned int r=0; r<students.size(); r++){
        for (unsigned int c=0; c<6;c++){
            switch (c){

            case 0:
            {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((students[r].f_name).c_str()));
                break;
            }
            case 1:
            {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((students[r].l_name).c_str()));
                break;
            }
            case 2:
            {
                string age_string = to_string(students[r].age);
                this->ui->tableWidget->setItem(r,c,new QTableWidgetItem(age_string.c_str()));
                break;
            }
            case 3:
            {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((students[r].phone).c_str()));
                break;
            }
            case 4:
            {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((students[r].email).c_str()));
                break;
            }
            case 5:
            {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((students[r].grade).c_str()));
                break;
            }

            }
        }
    }
    this->ui->pushButton->setEnabled(false);
}

void showstudents::on_pushButton_2_clicked()
{

    QWidget *sh = new Show;
    this->hide();
    sh->show();
}

