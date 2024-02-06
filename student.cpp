#include "student.h"
#include <stdexcept>
using namespace std;

string grades[] = {"A+","A","A-","B+","B-","B","C+","C","C-","D","F"};

Student::Student(string f_name, string l_name, int age, string phone , string email, string grade)
    :Person(f_name, l_name, age, phone, email){

    // Grade Validation

    bool is_grade_right = false;
    for(unsigned int i=0; i < size(grades); i++)
    {
        if(grade == grades[i])
            is_grade_right = true;
    }
    if (is_grade_right)
        this->grade = grade;
    else throw invalid_argument("Invalid Grade");
}

bool Student::add_stud_class(Subject subject, string grade){
    this->student_subjects.push_back({subject.name, grade});
    return true;
}
