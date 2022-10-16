#include <iostream>

void bakePizza();
void bakePizza(std::string topping1);


int main()
{

    bakePizza();

    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza";
}
void bakePizza(std::string topping1){ // 
    std::cout << "Here is your " << topping1 << " pizza!\n";
}