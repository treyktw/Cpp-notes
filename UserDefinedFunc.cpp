#include <iostream>

void happyBirthday(std::string name);

int main(){

    // function - a block of reusable code
    // to use function call the function

    std::string name = "Bro";

    happyBirthday(name);

    return 0;

}

void happyBirthday(std::string name){
    std::cout << "happy Birthday to " << name << '\n';
    std::cout << "happy Birthday to " << name << '\n';
    std::cout << "happy Birthday dear " << name << '\n';
    std::cout << "happy Birthday to " << name << '\n';
}