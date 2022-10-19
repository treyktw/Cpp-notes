#include <iostream>


//class to create human objects
class Human{
    public:
        std::string name; // you can assign a defualt attribute so you dont have to type out name/occ/age etc // only if you want to "clone" them
        std::string occupation;
        int age;

        void eat(){
            std::cout << "This person is eating\n";

        }
        void drink(){
            std::cout << "This person is drinking\n";
        }
        void sleep(){
            std::cout << "this person is sleeping\n";
        }
};
class Car{
    public:
        std::string make;
        std::string model;
        int year;
        std::string color;

        void accelerate(){
            std::cout << "Car is accelerating\n";
        }
        void brake(){
            std::cout << "Car is slowing down\n";
        }
};

int main(){

    // object = a collection of attributes and methods
    //          they can have characteristics and could peform actions
    //          can be used to mimic real world items (Ex. Phone, Books, Dog) 
    //          Created from a class which acts as a blue-print

    Human human1;
    Human human2;

    human1.name = "Joe";
    human1.occupation = "Data sci";
    human1.age = 23;

    human1.name = "Ryan";
    human1.occupation = "Game Dev";
    human1.age = 24;

    std::cout << human1.name << '\n';
    std::cout << human1.occupation << '\n';
    std::cout << human1.age << '\n';

    std::cout << human2.name << '\n';
    std::cout << human2.occupation << '\n';
    std::cout << human2.age << '\n';
    

    human1.eat();
    human1.drink();
    human1.sleep();

    human2.eat();
    human2.drink();
    human2.sleep();

    Car car1;

    car1.make = "Ford";
    car1.model = "mustang";
    car1.year = 2023;
    car1.color = "red";

    std::cout << car1.make << '\n';
    std::cout << car1.model << '\n';
    std::cout << car1.color << '\n';
    std::cout << car1.year << '\n';

    car1.accelerate();
    car1.brake();

    
    return 0;

}