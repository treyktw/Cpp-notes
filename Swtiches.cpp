#include <iostream>

int main(){

    //? switch = alternaitve to using many "elif" statements
    //?         compare one value against maching cases


//    int month;
//    std::cout << "Enter the month: ";
//    std::cin >> month;
/*
    if(month == 1){
        std::cout << "It is january";
    } 
    else if (month == 2){
         std::cout << "It is Febuary";
    }
    else if (month == 3){
         std::cout << "It is March";
    }
    else if (month == 4){
         std::cout << "It is April";
    }
    else if (month == 5){
         std::cout << "It is May";
    }
    else if (month == 6){
         std::cout << "It is June";
    }
    else if (month == 7){
         std::cout << "It is July";
    }
    else if (month == 8){
         std::cout << "It is August";
    }
    else if (month == 9){
         std::cout << "It is September";
    }
    else if (month == 10){
         std::cout << "It is October";
    }
    else if (month == 11){
         std::cout << "It is November";
    }
    else if (month == 12){
         std::cout << "It is December";
    }
*/
//! all these elif statements are ineffecient and there is a better way todo this would by using "Case"

/*
    switch (month){
        case 1:
            std::cout << "It is January";
            break;
        case 2:
            std::cout << "It is Febuary";
            break;
        case 3:
            std::cout << "It is March";
            break;
        case 4:
            std::cout << "It is April";
            break;
        case 5:
            std::cout << "It is May";
            break;
        case 6:
            std::cout << "It is June";
            break;
        case 7:
            std::cout << "It is July";
            break;
        case 8:
            std::cout << "It is August";
            break;
        case 9:
            std::cout << "It is September";
            break;
        case 10:
            std::cout << "It is October";
            break;
        case 11:
            std::cout << "It is November";
            break;
        case 12:
            std::cout << "It is December";
            break;
        default: //* use default if there are no matching cases / else statement
            std::cout << "Please enter in only numbers 1-12";
    }
*/

    char grade;
    
    std::cout << "what letter grade?: ";
    std::cin >> grade;
    
    switch(grade){
        case 'A':
            std::cout << "You did Great!";
            break;
        case 'B':
            std::cout << "You did good";
            break; 
        case 'C':
            std::cout << "You did okay";
            break;
        case 'D':
            std::cout << "You did not do so great";
            break;
        case 'F':
            std::cout << "You failed";
            break; 
        default:
            std::cout << "Please only enter in a letter grade (A-F)";
    }

    return 0;
}