#include <iostream>

struct Car{
    std::string model;
    int year;
    std::string color;
};
void paintCar(Car &car, std::string color);
void printCar(Car &car);
int main(){

    Car car1;
    Car car2;

    car1.model = "GT-R";
    car1.year = 2021;
    car1.color = "red";

    car2.model = "Nissan370z";
    car2.year = 2005;
    car2.color = "black";


    std::cout << &car1 << '\n';

    paintCar(car1, "silver");
    paintCar(car2, "red");

    printCar(car1);
    printCar(car2);

    return 0;
}
void printCar(Car &car){
    std::cout << &car << '\n';
    std::cout << car.model << '\n';
    std::cout << car.year << '\n';
    std::cout << car.color << '\n';
}
void paintCar(Car &car, std::string color){
    car.color = color;
}