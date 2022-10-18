#include <iostream>

void printInfo(const std::string name, const int age);

int main(){

// const parameter = parameter that is effectivelyt read only 
//                   code is more secure and conveys intent
//                   also useful for references and pointers


    std::string name = "Trey";
    int age = 17;

    printInfo(name, age);



    return 0;
}
void printInfo(const std::string name, const int age){
    
    std::cout << name << '\n';
    std::cout << age << '\n';
}