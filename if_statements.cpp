#include <iostream>

int main(){

    // if statement = do something is a conditition is true
    //                if not, then dont do it(else or elif/else if(elif in python))

    int age;

    std::cout << "Enter Your age: ";
    std::cin >> age;

    //? here we see a less or equal to statement >=
    //? At other times we also may see < greater than, > less than, <= greater than or equal to, >= less than or equal to, and == means equal to
    //? equals to (==) is no the same as equals (=), equals is an assignment operator and in this case you would be setting age to int


    if(age >= 18){
        std::cout << "Welcome to the site! ";
    }
    else if(age < 0 ){
        std::cout << "You have not been born yet!";
    }
    else if(age >= 100){
        std::cout << "You are too old to enter the site!"; // most of the time it would better to have this as the if statement and change the first if statement to else
    }
    else{
        std::cout << "You are not old enough to enter!";
    }

    return 0;
}