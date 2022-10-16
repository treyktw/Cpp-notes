#include <iostream>

int main()
{
    // array = a data structure that can multiple values
    //         values are accessed by na index number
    //         kind of liek a variable that holds multiple values

    std::string cars[3];

    cars[0] = "Camaro";
    cars[1] = "Mastang";
    cars[2] = "Camry";

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n'; 
    std::cout << cars[2] << '\n';

    double prices[] = {5.00, 7.50, 9.99, 15.00};
    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';
    std::cout << prices[3] << '\n';

    return 0;


}   