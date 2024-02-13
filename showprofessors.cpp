#include "showprofessors.h"
#include "addprofessor.h"
#include "ui_showprofessors.h"

ShowProfessors::ShowProfessors(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowProfessors)
{
    ui->setupUi(this);
}

ShowProfessors::~ShowProfessors()
{
    delete ui;
}

void ShowProfessors::on_pushButton_clicked()

{
    // Professor p1("Mohamed","Eslam",71,"01234567890","p1@test.com","electronicsprof");
    // Professor p2("Sherif","Samy",50,"08765432100","p2@test.com","measurementsprof");
    // Professor p3("Ghaidaa","Eldeeb",35,"05678912300","p3@test.com","ta");
    // professors.push_back(p1);
    // professors.push_back(p2);
    // professors.push_back(p3);

    for (unsigned int i=0; i<professors.size(); i++ )
    {
        this->ui->tableWidget->insertRow(i);
    }
    for (unsigned int r=0; r<professors.size(); r++){
        for (unsigned int c=0; c<6;c++){
            switch (c){

                case 0:
                {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((professors[r].f_name).c_str()));
                        break;
                }
                case 1:
                {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((professors[r].l_name).c_str()));
                        break;
                }
                case 2:
                {
                        string age_string = to_string(professors[r].age);
                        this->ui->tableWidget->setItem(r,c,new QTableWidgetItem(age_string.c_str()));
                        break;
                }
                case 3:
                {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((professors[r].phone).c_str()));
                        break;
                }
                case 4:
                {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((professors[r].email).c_str()));
                        break;
                }
                case 5:
                {       this->ui->tableWidget->setItem(r,c,new QTableWidgetItem((professors[r].title).c_str()));
                        break;
                }

            }
        }
    }
    this->ui->pushButton->setEnabled(false);
}


void ShowProfessors::on_pushButton_clicked(bool checked)
{

}

