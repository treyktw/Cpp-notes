#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;

    Pizza(std::string x){
        topping1 = x;
    
    }
    Pizza(std::string x,std::string y){
        topping1 = x;
        topping2 = y;
    }
};

int main(){

    // overloaded constructors = multiple constructors w/ same name but differernt parameters
    //                           allows for varying arguments when installing an object

    Pizza pizza1("pepperoni");
    Pizza pizza2("mushrooms", "pepper" );
    std::cout << pizza1.topping1;
    std::cout << pizza2.topping2;




    return 0;
}