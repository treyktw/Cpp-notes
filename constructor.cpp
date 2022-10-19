#include <iostream>


class Student{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string x, int y, double z){ // think of as a function // can set parameters // this is the constructor
                                                    // if attribute names are different from parameter names this -> is not needed 
        name = x;//     this ->name =name;
        age = y;//      this ->age = age;
        gpa = z;//      this ->gpa = gpa;
        
        
    }
};
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        Car(std::string w,std::string x,int y, std::string z){
            make = w;
            model = x;
            year = y;
            color = z;

        }
};

int main(){

    //constructor = special method that is automatically called when an object is instantiated
    //              useful for assignning values to attributes as arguments

    Student student1("Trey", 17, 3.5);
    Student student2("Ethan", 18, 3.8);
    Student student3("Ryan", 17, 4.0);


    std::cout << student1.name << '\n';
    std::cout << student1.age << '\n';
    std::cout << student1.gpa << '\n';
    std::cout << student2.name << '\n';
    std::cout << student2.age << '\n';
    std::cout << student2.gpa << '\n';
    std::cout << student3.name << '\n';
    std::cout << student3.age << '\n';
    std::cout << student3.gpa << '\n';

    Car car1("Nissian", "370",  2005, "red");

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.year << '\n';
    std::cout << car1.color << '\n';



    return 0;
}