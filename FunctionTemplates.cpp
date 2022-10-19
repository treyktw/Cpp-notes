#include <iostream>
template <typename T, typename U>// typename U to pass in two different datatypes
/*auto max(T x, U y){ // using autowill make the complier deduce what the return type should be 
    return (x > y) ? x : y;
}
int main(){
    std::cout << max(1, 2.1) << '\n';

    return 0;
} */


// a function that will accept any data type
T max(T x, T y){
    return (x > y) ? x : y;
}
// Cpp complier does not recognize T as a  function 
// add a template perameter deceleration template <typename T>

int max(int x, int y){
    return (x > y) ? x : y;
}
double max(double x, double y){
    return (x > y) ? x : y;
}
char max(char x, char y){
    return (x > y) ? x : y;
}
int main(){

    // function template = discribes what a function looks like.
    //                     can be used to generate as many overlaod 
    //                     as needed, each using different data types


    std::cout << max(1.1, 2.1) << '\n'; // intagers
    std::cout << max('1', '2') << '\n'; // characters



    return 0;
}


