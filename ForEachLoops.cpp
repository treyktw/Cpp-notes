#include <iostream>


int main(){

    // foreach loop = loop that eases the traversal over an
    //                iterable data set

    //std::string students[] = {"trey", "ethan", "misu", "ryan", "Fanzo"};

    int grades[] = {95, 87, 90, 85};
    for(int grades : grades){
        std::cout << grades << '\n';
    }

    return 0;
}