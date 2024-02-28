#include "showprofessors.h"
#include "globals.h"
#include "ui_showprofessors.h"
#include "show.h"
#include "QPixmap"
ShowProfessors::ShowProfessors(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ShowProfessors)
{
    ui->setupUi(this);
   QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/showss");
    this->ui->background_image->setPixmap(pic);
}


ShowProfessors::~ShowProfessors()
{
    delete ui;
}

void ShowProfessors::on_pushButton_clicked()

{

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


void ShowProfessors::on_pushButton_2_clicked()
{
    QWidget *shw = new Show ;
    this->hide();
    shw->show();


}

