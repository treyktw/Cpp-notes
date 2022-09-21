#include <iostream>

int main(){

    // ternary operator ?: = replacement to an if/else statement
    // condtition ? expression1 : expression2;

    //int grade = 75;
    //grade >= 60 ? std::cout << "You Pass!" : std::cout << "You Fail!";

    //int number = 8;
    //number % 2 ? std::cout << "ODD" : std::cout << "EVEN";

    bool hungry = false;

    //hungry ? std::cout << "You are hungry!" : std::cout << "You are fuill";
    std::cout << (hungry ? "You are hungry" : "You are full");

    return 0;
}