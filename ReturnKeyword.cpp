#include <iostream>

double square(double length);

int main(){


    // return = return ta value to the spot where you called the encompassing function
    //create a function that will calculate the value of a square

     double length = 5.0;
     double area = square(length);

     std::cout << "Area: " << area << "cm^2\n";

    return 0;
}
double square(double length){
    double result = length * length;
    
}