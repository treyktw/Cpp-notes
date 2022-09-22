#include <iostream>

int main(){


    // length string 
    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    //if(name.length() > 12){ //? returns the length of that string
    //    std::cout << "Your name can not be over 12 characters";
    //}
    //else{
    //    std::cout << "Welcome " << name;
    //}
    //if(name.empty()){ //? will return if a string is empty or not
    //    std::cout << "You did not enter your name";
    //}  // this returns a boolean value
    //else{
    //    std::cout << "Hello " << name;
    //}

    //name.clear();//? check to see user input
    
    //std::cout << "Hello" << name;

    //name.append("@gmail.com");//?append string with another string
    
    //std::cout << "Your user name is now " << name;

    //std::cout << name.at(0);//?return a given charcter within a string

    //name.insert(0, "@");//? insert character at a given position

    //std::cout << name;

    //std::cout << name.find(' ');//?find spaces within name

    //name.erase(0, 4); erase characters in a string

    // for more helpful string classes refer to https://cplusplus.com/reference/string/string/

    //std::cout << name;


    
    return 0;
}