#include <iostream>

int main(){

    //? do while loops = do some block of code first,
    //?                  then repeat again if condition is true

    //example

    int number;

    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number; 
    }while(number < 0);

    std::cout << "The # is: " << number;


    return 0;
}