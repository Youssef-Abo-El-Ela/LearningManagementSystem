#ifndef SUBJECT_H
#define SUBJECT_H
#include <string>
#include <vector>
using namespace std;

class Subject
{
public:
    string name;
    string code;
    string hall;
    string time;
    vector<string> teaching_professors;
    vector<string> enrolled_students;
    Subject(string name, string code, string hall, string time);
    bool define_sub_prof(string);
    bool define_sub_stud(string);
};

#endif // SUBJECT_H
