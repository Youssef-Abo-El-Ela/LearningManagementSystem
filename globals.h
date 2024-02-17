#ifndef GLOBALS_H
#define GLOBALS_H

#include "professor.h"
#include "student.h"

extern vector<Student> students;
extern vector<Professor> professors;
extern vector <Subject> classes;
extern string class_name;

class Globals
{
public:
    Globals();
};

#endif // GLOBALS_H
