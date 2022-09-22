#include <iostream>

int main(){
    std::string name;
                        //! while loop is like an if statement, except it will repeat code infinitly
    while(name.empty()){ //? while loops will loop program an infinite amount of times until correct input is given
        std::cout << "Enter Your Name";
        std::getline(std::cin, name);


    }

    while(1 == 1) //? infinite loop
        std::cout << "HELP";

    std::cout << "Hello " << name;

}