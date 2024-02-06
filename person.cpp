#include "person.h"
#include <regex>
#include <stdexcept>

Person::Person(string f_name, string l_name, int age, string phone , string email) {
    // First Name Validation

    if(f_name[0]< 'A' || f_name[0] > 'Z' || f_name.empty()){
        throw invalid_argument("Please check the first name and write the first letter of the first name as a capital letter");
    }

    for(unsigned int i =1; i<f_name.length() ; i++)
    {
        if(f_name[i]<'a' || f_name[i]>'z'){
            throw invalid_argument("Please check the first name and write the rest of first name letters in small letters");
        }
    }

    this->f_name = f_name;

    //Last Name Validation

    if(l_name[0]< 'A' || l_name[0] > 'Z' || l_name.empty()){
        throw invalid_argument("Please check the last name and write the first letter of the last name as a capital letter");
    }

    for(unsigned int i =1; i<l_name.length() ; i++)
    {
        if(l_name[i]<'a' || l_name[i]>'z'){
            throw invalid_argument("Please check the last name and write the rest of last name letters in small letters");
        }
    }

    this->l_name = l_name;

    // Age Validation

    if (age<3 || age > 99){
        throw invalid_argument("Invalid Age");
    }

    else{
        this->age = age;
    }

    // Phone Number Validation

    if(phone[0] != '0' || phone.length() != 11){
        throw invalid_argument("Invalid Phone Number");
    }
    else this->phone = phone;

    // Email Validation

    bool is_email_right = false;
    const regex pattern("(\\w+)(\\.|_)?(\\w*)@(\\w+)(\\.(\\w+))+");
    is_email_right= regex_match(email , pattern);
    if (is_email_right)
        this->email = email;
    else throw invalid_argument("Invalid Email");

}
