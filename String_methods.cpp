#include <iostream>

int main(){


    // length string 
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.length() > 12){
        std::cout << "Your name can not be over 12 characters";
    }
    else{
        std::cout << "Welcome " << name;
    }

    return 0;


}