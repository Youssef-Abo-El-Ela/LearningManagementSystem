#include "subject.h"
#include <stdexcept>

Subject::Subject(string name, string code, string hall, int time_hour, int time_min) {
    if(name[0]< 'A' || name[0] > 'Z' || name.empty()){
        throw invalid_argument("Please check the Subject Name and write the first letter of the subject name as a capital letter");
    }

    for(unsigned int i =1; i<name.length() ; i++)
    {
        if(name[i]<'a' || name[i]>'z'){
            throw invalid_argument("Please check the Subject Name and write the rest of subject name letters in small letters");
        }
    }
    this->name = name;
    this->code = code;
    this->hall = hall;
    if(time_hour>23 || time_hour<0 || time_min<0 || time_min>59)
        throw invalid_argument("Time entered is not valid");
}

bool Subject::define_sub_prof(string professor_name){
    this->teaching_professors.push_back(professor_name);
    return true;
}

bool Subject::define_sub_stud(string student_name){
    this->enrolled_students.push_back(student_name);
    return true;
}
