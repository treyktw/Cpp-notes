#include <iostream>

int main(){

    
    // break = break out of a loop
    // continue = skip current location

    for(int i = 1; i <= 20; i++ ){
        if(i == 13){
            break; // if use continue over break the code will go over the index(i) that it is set equal to
        }std::cout << i << '\n';

    }


    return 0;
}