#ifndef PERSON_H
#define PERSON_H
#include <string>
using namespace std;

class Person
{
public:
    string f_name;
    string l_name;
    int age;
    string phone;
    string email;

    Person(string f_name, string l_name, int age, string phone, string email);
};

#endif // PERSON_H
