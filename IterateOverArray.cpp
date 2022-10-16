#include <iostream>

int main(){

    std::string students[] = {"trey", "ethan", "misu", "ryan"}; 
    //array of grades
    char grades[] = {'A', 'B', 'C', 'D', 'F'};


    /*for(int i = 0; 1 < sizeof(students)/sizeof(std::string); i++){
        std::cout << students[i] << '\n';
    }*/
    for(int i = 0; 1 < sizeof(grades)/sizeof(char); i++){
        std::cout << grades[i] << '\n';
    }

    return 0;
}