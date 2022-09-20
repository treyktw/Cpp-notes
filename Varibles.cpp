// varibles are representations of numbers or values
/*
declaration
assignment
*/

//! declaration, need to list datatype of what you are declaring
//* Example wholes numbers/sentences/characters
//? Whole number exmaples


//#include <iostream>
/*int main() {
    //? x is the variable
    //* end statement with semicolon
    //! int x = 5;
    //! int y = 6;


    int x; //* declaration
    x = 5; //? assignment

    std::cout << x;

    return 0;
}*/
/* #include <iostream>
//? more addvanced
int main() {

    int x = 5;
    int y = 4;
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    return 0;
}
*/
#include <iostream>

int main(){

    //interger (whole number)
    int age = 21;
    int year = 2023;
    int days = 7;

    // double (number including decimals)
    //prices
    double price = 10.99;
    double gpa = 2.5;
    double temperature = 25.1;

    // single character
    // to store a singel character use singel quotes
    char grade = 'A';
    char initial = 'B';
    char currenty = '$';
    
    //booleans (true or False)
    bool student = false;
    bool power = true;
    bool forSale = true;

    //string (objects that represent a sequence of text)
    std::string name = "Trey";
    std::string day = "Friday";
    std::string food = "pizza";
    std::string address = "atlanta";    

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old";

    return 0;
}


