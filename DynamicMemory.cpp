#include <iostream>

int main(){

    // dynamic memory = Memory that is allocated after the program
    //                  is aready running and compiled
    //                  use the 'new' operator to allocate
    //                  memory in the heap rather the stack

    //                  usefull when we dont know how much memory 
    //                  we would need. Makes programs more flexiable
    //                  especially when accpeting user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << *pNum << '\n';


    delete pNum;

    return 0;
}