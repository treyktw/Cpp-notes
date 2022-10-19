#include <iostream>

struct student{
    std::string name;
    double gpa;
    bool enrolled; // = true setting the default value makes it so that you do not have to state it
};


int main(){

    // struct = A structure that group related variables under one name 
    //          structs can contain many different data types (string, int, bool, etc)
    //          variables are known as "members"
    //          memebers can be accessed with. "Class Member Access Operator"
    //          arrays elements are the same datatype / structs are the hold different datatypes 


    student student1;
    student1.name = "Jared";
    student1.gpa = 3.5;
    student1.enrolled = true;  // 0 = False 1 = True

    student student2;
    student2.name = "Kelvin";
    student2.gpa = 3.8;
    student2.enrolled = true;

    student student3;
    student3.name = "Jarif";
    student3.gpa = 4.0;
    student3.enrolled = true;

    std::cout << student1.name << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student1.enrolled << '\n';

    std::cout << student2.name << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student2.enrolled << '\n';

    std::cout << student3.name << '\n';
    std::cout << student3.gpa << '\n';
    std::cout << student3.enrolled << '\n';

    return 0;
}