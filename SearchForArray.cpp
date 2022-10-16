#include <iostream>

int searchArray(int array[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int myNum;

    std::cout << "Enter element to search for: " << '\n';
    std::cin >> myNum;

    index  = searchArray(numbers, size, myNum);

    if (index != -1)
    {
        std::cout << myNum << " is at index " << index;
    }
    else{
        std::cout << myNum << " is not in the array";
    }
    

    return 0;
}
int searchArray(int array[], int size, int element){

    for (int i = 0; i < size; i++)
    {
        if (array[i] == element){
            return i;
        }
        
    }
    return -1; // -1 serves as a sentinal value/something was not found
}