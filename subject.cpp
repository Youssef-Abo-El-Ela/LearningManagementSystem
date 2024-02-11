#include "subject.h"
#include <stdexcept>

Subject::Subject(string name, string code, string hall, string time) {
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
    this->time = time;
}
bool Subject::add_class(Subject class_details){
    this->existing_classes.push_back(class_details);
}
bool Subject::define_sub_prof(string professor_name){
    this->teaching_professors.push_back(professor_name);
    return true;
}

bool Subject::define_sub_stud(string student_name){
    this->enrolled_students.push_back(student_name);
    return true;
}
