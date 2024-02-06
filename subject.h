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
    string time_hour;
    string time_min;
    vector<string> teaching_professors;
    vector<string> enrolled_students;
    Subject(string name, string code, string hall, int time_hour, int time_min);
    bool define_sub_prof(string);
    bool define_sub_stud(string);
};

#endif // SUBJECT_H
