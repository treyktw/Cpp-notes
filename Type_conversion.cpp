#include <iostream>

int main(){

    // type conversion = conversion a value of one data type to another
    //                  Implicit = automatic
    //                  Explictit = Precede value with new data type (int)



    //doiuble x = (int) 3.14; //? this is an example of an Explicit
    //char x = 100; //? example of Implicit

    //std::cout < (char) 100;

    int correct = 8;
    int questions = 10;       // without double the answer would be Zero because questions are int/ whole numbers and cannot retain decimals
                              // explicitly casting double to questions will give out the percent output
    double score = correct / (double)questions * 100;

    std::cout << score << "%";

    return 0;
}