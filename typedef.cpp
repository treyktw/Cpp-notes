#include <iostream>
#include <vector> // include header file for data type

//typedef std::vector<std::pair<std::string, int>> pairlist_t; //* pairlist acts as an identifer for the datatype
//typedef std::string text_t;
//typedef int number_t;
using text_t = std::string;
using number_t = int;

int main(){
    /* typedef = reserved keyword used to create an additional name
        (alias) for anther data type.
        New identifier for an existing type
        helps with readability and reduces typos
        Replaced with 'using' (work better w/ templates)
    */
    //* pairlist_t pairlist;
    text_t firstName = "Trey";
            //!very case sensitive
    number_t age = 20;

    std::cout << firstName << '\n';
    std::cout << age << '\n';


    return 0;
}