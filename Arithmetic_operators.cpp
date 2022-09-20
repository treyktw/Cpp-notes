#include <iostream>

int main(){

    // arithmetic operators = return the result of a specific arithmetic operation
    //* (+ - * /)
    //? + = add - = subtract * = multiply / = divide

    //int students = 21;


    //* addition
    //students = students + 1;
    //students += 1  //! shorter way of writting
    //students++; //! use only if needed to add one
    
    //*subtraction
    //students = student - 2;
    //studetns -= 2
    //student--;
    
    //*Multiplication
    //students = students * 2;
    //students*= 2;
    
    //*division
    //students = students / 2;
    //students/=2;

    //! when dividing using int any decimals will not used and number will come out rounded down
    //! Never Rounded up
    //! to get deciamls and exact numbers change int to double

   // int remainder = students % 3;
                            //? % is a modulus operator
                            //? It is used to get the remainder after calculation has been done

    int students = 6 - 5 + 4 * 3 / 2;
    //To solve this using pemdas or gemdas/
    //parenthesis
    //multiplication & division
    //addition & substraction
    std::cout << students;
    //std::cout << remainder;


    return 0;
}