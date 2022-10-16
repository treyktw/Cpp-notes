#include <iostream>


double getTotal(double prices[], int size);


int main(){

    double prices[] = {64.93, 93.09, 42.22, 90.32};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = getTotal(prices, size);


    std::cout << "$" << total;

    return 0;
}
double getTotal(double prices[], int size){
    double total = 0;

    for(int i = 0; i < size; i++){
        total += prices[i];

    }

    return total;
}