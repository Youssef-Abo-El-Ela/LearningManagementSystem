#include "show.h"
#include "search.h"
#include "showclasses.h"
#include "showprofessors.h"
#include "showstudents.h"
#include "ui_show.h"
#include"welcome.h"
Show::Show(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Show)
{
    ui->setupUi(this);
    QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/show");
    ui->backgroundimage->setPixmap(pic);
}

Show::~Show()
{
    delete ui;
}

void Show::on_classes_clicked()
{
    QWidget *classes = new ShowClasses;
    this->hide();
    classes->show();
}


void Show::on_students_clicked()
{
    QWidget *students_page = new showstudents();
    this -> hide();
    students_page->show();
}


void Show::on_professors_clicked()
{
    QWidget *professors_page = new ShowProfessors();
    this->hide();
    professors_page->show();
}


void Show::on_search_clicked()
{
    QWidget *search_page = new Search();
    this->hide();
    search_page->show();
}


void Show::on_pushButton_clicked()
{
    QWidget *welcme = new Welcome;
    this->hide();
    welcme->show();
}

