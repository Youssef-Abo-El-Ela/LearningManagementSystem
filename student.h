#ifndef STUDENT_H
#define STUDENT_H
#include "person.h"
#include "subject.h"
#include <string>
#include <vector>
using namespace std;

class Student : public Person
{
public:
    string grade;
    vector<pair<string,string>> student_subjects;
    Student(string f_name, string l_name, int age, string phone, string email, string grade);
    bool add_stud_class(Subject ,string);
};

#endif // STUDENT_H
