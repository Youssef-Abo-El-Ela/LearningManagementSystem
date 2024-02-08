#include "professor.h"
#include <stdexcept>

Professor::Professor(string f_name, string l_name, int age, string phone , string email, string title)
    :Person(f_name, l_name, age, phone, email){

    bool is_title_right = true;
    for(unsigned int i=0 ; i<title.length() ; i++)
    {
        if ( title[i] > 'z' || title[i] < 'a')
            is_title_right = false;
    }
    if (is_title_right)
        this->title= title;
    else throw invalid_argument("Title is Invalid");
};

bool Professor::add_prof_sub(Subject subject){
    this->explained_subjects.push_back(subject.name);
    return true;
}


