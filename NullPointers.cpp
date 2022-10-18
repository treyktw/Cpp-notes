#include <iostream>

int main(){

    // Null value = a special value that means something has no value / when a pointer is holding a null value,
    //              that pointer is not pointing at anything (null pointers)

    //nullptr = keyword represebts a null pointer 

    // nullptrs are helpful when determining  if an address was successfully assigned to a pointer
    // when using pointer be careful that your code is not 
    // dereferencing nul or pointing to free memory 
    // this will cause undefined behavior

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if (pointer == nullptr)
    {
        std::cout << "address was not assigned!\n";
    }
    else{
        std::cout << "address was assigned\n";
        std::cout << *pointer;
    }
    

    return 0;
}