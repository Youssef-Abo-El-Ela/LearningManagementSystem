
#include "fstream"
#include "mainwindow.h"
#include <QApplication>

using namespace std;
fstream export_csv;

int main(int argc, char *argv[])
{
    // Student s1("Ahmed","Essam",20,"01063231932","test@test.com","A+");
    // Student s2("Mohamed","Khaled",21,"01223739744","test2@test.com","B+");
    // Student s3("Kamel","Raafat",22,"01063739744","test3@test.com","C+");
    // Student students[]={s1,s2,s3};


    // Professor p1("Mohamed","Eslam",71,"01234567890","p1@test.com","electronicsprof");
    // Professor p2("Sherif","Samy",50,"08765432100","p2@test.com","measurementsprof");
    // Professor p3("Ghaidaa","Eldeeb",35,"05678912300","p3@test.com","ta");
    // professors.push_back(p1);
    // professors.push_back(p2);
    // professors.push_back(p3);

    // Subject Electronics("Electronics","ELN","3201",10,0);
    // s1.add_stud_class(Electronics,"A");
    // cout<<"Student1"<<s1.f_name<<s1.l_name<<s1.student_subjects[0].first<<s1.student_subjects[0].second<<endl;

    // export_csv.open("Database.csv", ios::out);
    // export_csv <<"First Name"<<","<<"Last Name"<<","<<"Age"<<","<<"Phone"<<","<<"Email"<<","<<"GPA"<<"\n";
    // for(unsigned int i = 0; i<size(students); i++)
    // {
    //     export_csv <<students[i].f_name<<","<<students[i].l_name<<","<<students[i].age<<","<<students[i].phone<<","<<students[i].email<<","<<students[i].grade<<"\n";
    // }

    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    // ShowProfessors pr;
    // pr.show();
    // ShowClass cls;
    // cls.show();
    // AddStudentToClass ASC;
    // ASC.show();
    // showstudents st;
    // st.show();
    // Subject cls("Abc","SBE2003","3333","1PM");
    // for (unsigned int i=0;i<cls.enrolled_students.size();i++){
    //     cout<<cls.enrolled_students[i];
    // }
    return a.exec();
}
