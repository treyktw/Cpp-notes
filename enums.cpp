#include <iostream>

enum Day {sunday = 0 ,monday = 1,tuesday = 2,wednesday = 3,
          thursday = 4,friday = 5 ,saturday = 6};

//              0       1           2          3
enum Flavor {vanilla, chocolate, strawberry, mint}; // if you dont explicitly assign integers to the names they will start at 0

enum Color{red, orange, yellow, green, blue , purple};

enum{mercury = 4880, venus = 12104, earth = 12756,
     mars = 6794, jupiter = 123984, saturn = 108728,
     uranus = 51118, neptune = 49532, pluto = 2320}; // integers = the size of planets in km

int main(){

    // enums = a user-defined data type that consists
    //         of paired named-interger contants.
    //         good if you have a set of potential options
    
    Day today = friday;

    switch (today){
        case sunday: std::cout << "It is Sunday!\n"; // can change names to values Ex sunday = 0 change case from sunday to 0
                    break;
        case monday: std::cout << "It is Monday!\n";
                    break;
        case tuesday: std::cout << "It is Tuesday!\n";
                    break;
        case wednesday: std::cout << "It is Wednesday!\n";
                    break;
        case thursday: std::cout << "It is Thursday!\n";
                    break;
        case friday: std::cout << "It is Friday!\n";
                    break;
        case saturday: std::cout << "It is Saturday!\n";
                    break;                        
    }

    return 0;
}