#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "person.h"
#include "subject.h"
#include <string>
#include <vector>
using namespace std;

class Professor : public Person
{
public:
    string title;
    vector<string> explained_subjects;
    Professor(string f_name, string l_name, int age, string phone, string email, string title);
    bool add_prof_sub(Subject);
};
#endif // PROFESSOR_H

