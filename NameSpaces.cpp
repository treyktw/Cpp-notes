#include <iostream>

namespace first{
    int x = 1;
}
namespace second{
    int x = 2;

}
int main() {
    using namespace first;

    // NameSpace = provides a solution for preventing name conflicts 
    //             in large projects. Each entity needs a unqiue name.
    //             A namespace allows for identically named entities
    //             as long a the namespaces are different.

    int x = 0;

                // scope resolution operator 
                // used to qualify hidden names so that you can still use them
                // using namespace --- allows the user to not have to type out the "First" namespace in std::cout
    std::cout << x;

    return 0;
}  


//int main(){
//    using namespace std; // reasons to use std with namespace is to save typing 
                             // tpying out std would not be required 
                             // std namespace has hundreds of different entites
//
//    string name = "Trey";
//
//    cout << "Hello " << name;
//
//    return 0;
//}

//int main(){
//    using std::cout;
//    using std::string;
//
//    string name = "Bro";
//
//    cout << "Hello" << name;
//    
//    return 0;
//}