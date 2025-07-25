#include <iostream>

// Null value = a special value that means something has no value
//              when a pointer is holding a null value,
//              that pointer is not pointing at anything (null pointer)

// nullptr = keyword represents a null pointer literal

// nullptrs are helpful when determining if an address was 
// successfully assigned to a pointer

int main(){

    int *pointer = nullptr; // good practice if assigning later
    int x = 123;
    
    pointer = &x;


    if(pointer == nullptr){
        std::cout << "Not successfully assigned address";
    }// good for dynamic memory checks!!!
    else{
        std::cout << "address was assigned \n";
        std::cout << *pointer << '\n';
    }
    return 0;
}