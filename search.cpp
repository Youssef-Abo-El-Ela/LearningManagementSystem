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
    QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/showss");
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
    vector <string> students_names;
    vector <string> professors_names;
    for(unsigned int i=0 ; i<classes.size();i++)
    {
        classes_names.push_back(classes[i].name);
    }
    for(unsigned int i=0 ; i<students.size();i++)
    {
        students_names.push_back(students[i].f_name +" " +students[i].l_name);
    }
    for(unsigned int i=0 ; i<professors.size();i++)
    {
        professors_names.push_back(professors[i].f_name + " " +professors[i].l_name);
    }
    // volatile int l=0;
    // volatile int r = classes_names.size()-1;

    bool search_found= false;
    if (search_for_category == "Class")
    {
        volatile int l=0;
        volatile int r = classes_names.size()-1;

        sort(classes_names.begin(),classes_names.end());
        while(l<=r)
        {
            volatile int mid=(l+r)/2;
            search_for_name = this->ui->name_text->text().toStdString();
            first_letter_of_name = search_for_name[0];

            if (classes_names[mid][0] == first_letter_of_name && search_for_name.size() == 1)
            {
                while (mid < classes_names.size() && classes_names[mid][0] == first_letter_of_name)
                {

                    QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(classes_names[mid]));
                    int rowCount = this->ui->tableWidget->rowCount();
                    this->ui->tableWidget->insertRow(rowCount);
                    this->ui->tableWidget->setItem(rowCount,0,item);
                    mid ++;

                }
                search_found=true;
                break;

            }
            else if(classes_names[mid][0] == first_letter_of_name && search_for_name.size() > 1)
            {
                while (classes_names[mid] != search_for_name) {
                    mid++;
                }
                QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(classes_names[mid]));
                int rowCount = this->ui->tableWidget->rowCount();
                this->ui->tableWidget->insertRow(rowCount);
                this->ui->tableWidget->setItem(rowCount,0,item);
                search_found = true;
                break;
            }
            else if (classes_names[mid][0] < first_letter_of_name )
                l = mid+1;
            else if (classes_names[mid][0] > first_letter_of_name)
                r = mid-1;
        }
    }
    else if (search_for_category == "Student"){
        volatile int l=0;
        volatile int r = students_names.size()-1;

        sort(students_names.begin(),students_names.end());
        while(l<=r)
        {
            volatile int mid=(l+r)/2;
            search_for_name = this->ui->name_text->text().toStdString();
            first_letter_of_name = search_for_name[0];

            if (students_names[mid][0] == first_letter_of_name && search_for_name.size() == 1)
            {
                while (mid < students_names.size() && students_names[mid][0] == first_letter_of_name)
                {

                    QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(students_names[mid]));
                    int rowCount = this->ui->tableWidget->rowCount();
                    this->ui->tableWidget->insertRow(rowCount);
                    this->ui->tableWidget->setItem(rowCount,0,item);
                    mid ++;

                }
                search_found=true;
                break;

            }
            else if(students_names[mid][0] == first_letter_of_name && search_for_name.size() > 1)
            {
                while (students_names[mid] != search_for_name) {
                    mid++;
                }
                QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(students_names[mid]));
                int rowCount = this->ui->tableWidget->rowCount();
                this->ui->tableWidget->insertRow(rowCount);
                this->ui->tableWidget->setItem(rowCount,0,item);
                search_found = true;
                break;
            }
            else if (students_names[mid][0] < first_letter_of_name )
                l = mid+1;
            else if (students_names[mid][0] > first_letter_of_name)
                r = mid-1;
        }
    }
    else if (search_for_category == "Professor"){
        volatile int l=0;
        volatile int r = professors_names.size()-1;

        sort(professors_names.begin(),professors_names.end());
        while(l<=r)
        {
            volatile int mid=(l+r)/2;
            search_for_name = this->ui->name_text->text().toStdString();
            first_letter_of_name = search_for_name[0];

            if (professors_names[mid][0] == first_letter_of_name && search_for_name.size() == 1)
            {
                while (mid < professors_names.size() && professors_names[mid][0] == first_letter_of_name)
                {

                    QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(professors_names[mid]));
                    int rowCount = this->ui->tableWidget->rowCount();
                    this->ui->tableWidget->insertRow(rowCount);
                    this->ui->tableWidget->setItem(rowCount,0,item);
                    mid ++;

                }
                search_found=true;
                break;

            }
            else if(professors_names[mid][0] == first_letter_of_name && search_for_name.size() > 1)
            {
                while (professors_names[mid] != search_for_name) {
                    mid++;
                }
                QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString(professors_names[mid]));
                int rowCount = this->ui->tableWidget->rowCount();
                this->ui->tableWidget->insertRow(rowCount);
                this->ui->tableWidget->setItem(rowCount,0,item);
                search_found = true;
                break;
            }
            else if (professors_names[mid][0] < first_letter_of_name )
                l = mid+1;
            else if (professors_names[mid][0] > first_letter_of_name)
                r = mid-1;
        }

    }
    if (search_found == false)
    {
        QTableWidgetItem *item = new QTableWidgetItem(QString::fromStdString("NO RESULTS FOUND!!"));
        int rowCount = this->ui->tableWidget->rowCount();
        this->ui->tableWidget->insertRow(rowCount);
        this->ui->tableWidget->setItem(rowCount,0,item);
    }
}



void Search::on_back_button_clicked()
{
    QWidget *show_win = new Show();
    this->hide();
    show_win->show();
}

