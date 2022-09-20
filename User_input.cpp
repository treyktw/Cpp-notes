#include <iostream>

// cout << (insertion operator)
// sin >> (extraction operator)
    
int main(){

    std::string name;
    int age;

    //std::cout << "whats your Name? : ";
    //std::cin >> name;

    std::cout << "whats your Full Name? : "; // asking for a string that contains spaces // to get spaces you would use getline function
    std::getline(std::cin >> std::ws, name); // after cin use std::ws to eliminate any characters or whitespace characters before any user input

    std::cout << "Wahts your age? ";
    std::cin >> age;

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}