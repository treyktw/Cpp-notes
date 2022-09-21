#include <iostream>

int main()
{
    // &&  = if conditions are true
    // || = check of at least one of two conditions is true 
    // ! = reverse the logical state of its operand

    int temp;
    bool sunny = false;

    std::cout << "enter the temperature: ";
    std::cin >> temp; 
    if(temp <= 0 || temp >= 30){
        std::cout << "The tempature is good!\n";
    }
    else{
        std::cout << "the tempature is bad!\n";
    }
 
    if (sunny){
        std::cout << "It is sunny outside!";
    }
    else{
        std::cout << "It is cloudy outside!";
    }
}