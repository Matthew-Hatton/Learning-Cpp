#include <iostream>

int main(){
    std::string foods[5]; // if you don't specify input, you have to specify size
    // can't change whilst running - dynamic memory
    int size = sizeof(foods)/sizeof(foods[0]);
    std::string temp;

    for(int i = 0; i < size;i++){
        std::cout << "Enter a food you like or 'q' to quit #" << i + 1 << ": ";
        std::getline(std::cin, temp);
        if(temp == "q"){
            break;
        } else{
            foods[i] = temp;
        }
    }

    std::cout << "You like the following food: \n";
    for(int i = 0; !foods[i].empty(); i++){ // as long as foods isn't empty....
        std::cout << foods[i] << "\n";
    }
    return 0;
}