#include "Student.h"
#include <cstring>
#include <iostream>

Student::Student()
{
   // studentNo++;
}

Student::~Student()
{
    //studentNo--;
}
//static int studentNo = 0;

//setter functions
void Student::set_name(std::string text){
    name = text;
}

void Student::set_year(std::string yr){
    year = yr;
}

void Student::set_branch(std::string br){
    branch = br;
}

void Student::set_ph(std::string ph){
    if(ph.size() > 10) {
        std::cout << "invalid phone number" << std::endl;
    }
    phoneNo = ph;
}

//getter functions
std::string Student::get_name() {
    return name;
}

std::string Student::get_year(){
    return year;
}

std::string Student::get_branch(){
    return branch;
}

std::string Student::get_ph(){
    return phoneNo;
}

void Student::printdata(){
    std::cout << this << std::endl;
}

    std::ostream &operator<<(std::ostream &os, const Student &obj){
    os << obj.name << "\t";
    os << obj.branch << "\t";
    os << obj.year<< "\t";
    os << obj.phoneNo << "\t";
    
    return os;
}
