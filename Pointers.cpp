#include <iostream>

int main(){

//         pointers = variables that stores memory address of another variable / sometimes its easier to work with an address 
  
//         & address-of operator
//         * dereference operator


    std::string name = "Trey";
    int age = 21;
    std::string freePizzas[5] ={"pizza1","pizza2","pizza3","pizza4","pizza5"};

    std::string *pName = &name;
    int *pAge = &age;
    std::string *pFreePizzas = freePizzas;

    std::cout << *pName << '\n';
    std::cout << *pAge << '\n';
    std::cout << *freePizzas << '\n';

    return 0;
}