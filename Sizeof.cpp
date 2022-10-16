#include <iostream>


int main(){

    // sizeof() = determins the size of bytes of a:
    //             variable, data type, objects, etc.

    std::string name = "Bro";
    double gpa = 3.5;
    char grade = 'A';
    bool student = true;
    std::string students[] = {"trey", "ethan", "misu", "ryan"};
    // array of characters

    char grades[] = {'A', 'B', 'C', 'D', 'F'};

    std::cout << sizeof(gpa) << "bytes\n";
    std::cout << sizeof(name) << "bytes\n";
    std::cout << sizeof(grade) << "bytes\n";
    std::cout << sizeof(grades)/ sizeof(grades[0]) << " elements\n";
    std::cout << sizeof(students)/ sizeof(std::string) << " elements\n";
    std::cout << sizeof(bool) << "bytes\n";
    
    


    return 0;
}