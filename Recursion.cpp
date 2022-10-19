#include <iostream>

// run all theser function seperate
// will not work ifg you dont!

void walk(int steps);
void hit(int hit);
int factorial(int num);
int main(){

    // recursion = a programming technique where a function invokes itself from within
    //             break a complex concept into repeatable single step processes

    // You may occurs problems iteratively or recursively
    // iteration means repeating or loops
    // Advantages include = less and cleaner code
    //                      and useful for sorting nad searching algorithms

    // disadvantages = uses more memory and can be slower
    
    walk(100);
    hit(100);

    std::cout << factorial(10);

    return 0;
}
//iterative approach
void walk(int steps){
    for (int i = 0; i < steps; i++)
    {
        std::cout << "take a step\n";
    }
    
}
// recursion uses more memory and a longer processing time 
void hit(int hits){
    if (hits > 0){
        std::cout << "you took a hit\n";
        hit(hits - 1);
    }

    
}
// Factorial function 
// a math function taking a number, subtracting it by one and multiplying it that number EX: 6 x 5 x 4 until you reach one 6 x 5 x 4 x 3 x 2 x 1
//iterative approach
int factorial(int num){
    int result = 1;
    for(int i = 0; i <= num; i++){
        result = result * i;
    }
    return result;
}
// answer = 3628800

//recursive approach 
//easier to understand
//uses more memory 
//slower
int factorial(int num){
    if (num > 1){
        return num * factorial(num - 1);
    }
    else{
        return 1;
    }
    
}


