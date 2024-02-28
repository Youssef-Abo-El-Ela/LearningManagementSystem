#include "edit.h"
#include "addclass.h"
#include "addprofessor.h"
#include "addstudent.h"
#include "addstudenttoclass.h"
#include "ui_edit.h"
#include "welcome.h"
#include "addprofessortoclass.h"
Edit::Edit(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Edit)
{
    ui->setupUi(this);
    QPixmap pic("D:/MIDPROJECT/LearningManagementSystem/Pics/show");
    ui->backgroundimage->setPixmap(pic);
}

Edit::~Edit()
{
    delete ui;
}

void Edit::on_add_student_clicked()
{
    QWidget *add_student_page = new AddStudent();
    this->hide();
    add_student_page->show();
}


void Edit::on_add_professor_clicked()
{
    QWidget *add_professor_page = new AddProfessor();
    this->hide();
    add_professor_page->show();
}


void Edit::on_add_class_clicked()
{
    QWidget *add_class_page = new AddClass();
    this->hide();
    add_class_page->show();
}


void Edit::on_add_prof_to_class_clicked()
{
    QWidget *add_professor_to_class_page=new addprofessortoclass;
    this->hide();
    add_professor_to_class_page->show();
}


void Edit::on_add_stud_to_class_clicked()
{
    QWidget *add_student_to_class_page = new AddStudentToClass();
    this->hide();
    add_student_to_class_page->show();
}


void Edit::on_pushButton_clicked()
{
    QWidget *welcme = new Welcome ;
    this->hide();
    welcme->show();
}

