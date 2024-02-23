#include "welcome.h"
#include "edit.h"
#include "globals.h"
#include "show.h"
#include "ui_welcome.h"
#include "fstream"
#include "sstream"


using namespace std;

fstream export_csv;

Welcome::Welcome(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Welcome)
{
    ui->setupUi(this);
    QPixmap pic("D:/University/BioMedical/Second Year/Learning_Managment_System_Project/LMS/Pics/Background.png");
    ui->backgroundimage->setPixmap(pic);
}

Welcome::~Welcome()
{
    delete ui;
}

void Welcome::on_show_button_clicked()
{
    QWidget *show_page = new Show();
    this->hide();
    show_page->show();
}


void Welcome::on_edit_button_clicked()
{
    QWidget *edit_page = new Edit();
    this -> hide();
    edit_page->show();
}


void Welcome::on_export_button_clicked()
{
    export_csv.open("Database.csv", ios::out);
    export_csv << "Students'_Info"<<"\n";
    export_csv <<"First Name"<<","<<"Last Name"<<","<<"Age"<<","<<"Phone"<<","<<"Email"<<","<<"GPA"<<"\n";
    for(unsigned int i = 0; i<students.size(); i++)
    {
        export_csv <<students[i].f_name<<","<<students[i].l_name<<","<<students[i].age<<","<<students[i].phone<<","<<students[i].email<<","<<students[i].grade<<"\n";
    }
    export_csv << "Professors'_Info\n";
    export_csv <<"First Name"<<","<<"Last Name"<<","<<"Age"<<","<<"Phone"<<","<<"Email"<<","<<"Title"<<"\n";
    for(unsigned int i = 0; i<professors.size(); i++)
    {
        export_csv <<professors[i].f_name<<","<<professors[i].l_name<<","<<professors[i].age<<","<<professors[i].phone<<","<<professors[i].email<<","<<professors[i].title<<"\n";
    }
    export_csv << "Classes'_Info\n";
    export_csv <<"Name"<<","<<"Hall"<<","<<"Time"<<","<<"Code"<<"\n";
    for(unsigned int i = 0; i<classes.size(); i++)
    {
        export_csv <<classes[i].name<<","<<classes[i].hall<<","<<classes[i].time<<","<<classes[i].code<<","<<"\n";
    }
}


void Welcome::on_import_button_clicked()
{
    vector<string> to_be_passed;
    to_be_passed.push_back("First Name");
    to_be_passed.push_back("Last Name");
    to_be_passed.push_back("Age");
    to_be_passed.push_back("Phone");
    to_be_passed.push_back("Email");
    to_be_passed.push_back("GPA");
    to_be_passed.push_back("Title");
    to_be_passed.push_back("Name");
    to_be_passed.push_back("Hall");
    to_be_passed.push_back("Time");
    to_be_passed.push_back("Code");

    ifstream file("Database.csv");
    if(!file.is_open())
        return ;

    string line;
    bool studentsSection = false;
    bool professorsSection = false;
    bool classesSection = false;

    while (getline(file, line)) {
        if (line == "Students'_Info") {
            studentsSection = true;
            continue;
        } else if (line == "Professors'_Info") {
            studentsSection = false;
            professorsSection = true;
            continue;
        } else if (line == "Classes'_Info") {
            professorsSection = false;
            classesSection = true;
            continue;
        }
        else if(line == "First Name,Last Name,Age,Phone,Email,GPA" || line == "First Name,Last Name,Age,Phone,Email,Title" || line == "Name,Hall,Time,Code"){
            continue;
        }
        stringstream ss(line);
        string cell;
        vector<string> row;
        while (getline(ss, cell, ',')) {
                row.push_back(cell);
        }

        if (studentsSection) {
            Student student(row[0],row[1],stoi(row[2]),row[3],row[4],row[5]);
            students.push_back(student);

        } else if (professorsSection) {
            Professor professor(row[0],row[1],stoi(row[2]),row[3],row[4],row[5]);
            professors.push_back(professor);
        } else if (classesSection) {
            Subject _class (row[0],row[1],row[2],row[3]);
            classes.push_back(_class);
        }
    }

    file.close();
}

