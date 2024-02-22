#include "search.h"
#include "globals.h"
#include "show.h"
#include "ui_search.h"
#include <algorithm>

using namespace std;

Search::Search(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Search)
{
    ui->setupUi(this);
    QPixmap pic("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/LearningManagementSystem/Pics/Background.png");
    this->ui->background_image->setPixmap(pic);
}

Search::~Search()
{
    delete ui;
}

void Search::on_search_button_clicked()
{
    this->ui->tableWidget->setRowCount(0);
    string search_for_category = this->ui->listWidget->currentItem()->text().toStdString();
    string search_for_name = this->ui->name_text->text().toStdString();
    char first_letter_of_name = search_for_name[0];
    vector <string> classes_names;
    for(unsigned int i=0 ; i<classes.size();i++)
    {
        classes_names.push_back(classes[i].name);
    }
    volatile int l=0;
    volatile int r = classes_names.size()-1;

    if (search_for_category == "Class")
    {
        sort(classes_names.begin(),classes_names.end());
        while(l<=r)
        {
            volatile int mid=(l+r)/2;
            search_for_name = this->ui->name_text->text().toStdString();
            first_letter_of_name = search_for_name[0];
            if (classes_names[mid][0] == first_letter_of_name)
            {
                while (mid < classes_names.size() && classes_names[mid][0] == first_letter_of_name)
                {

                    QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(classes_names[mid]));
                    int rowCount = this->ui->tableWidget->rowCount();
                    this->ui->tableWidget->insertRow(rowCount);
                    this->ui->tableWidget->setItem(rowCount,0,item);
                    mid ++;

                }
                break;

            }

            else if (classes_names[mid][0] < first_letter_of_name )
                l = mid+1;
            else if (classes_names[mid][0] > first_letter_of_name)
                r = mid-1;
            else {
                QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString("NO RESULTS FOUND!!"));
                int rowCount = this->ui->tableWidget->rowCount();
                this->ui->tableWidget->insertRow(rowCount);
                this->ui->tableWidget->setItem(rowCount,0,item);
                break;
            }
        }
    }

}


void Search::on_back_button_clicked()
{
    QWidget *show_win = new Show();
    this->hide();
    show_win->show();
}

