//Compound Assignment writing 
#include <iostream>

int main(){
    int value {10};

    value += 5; 
    std::cout << value << std::endl; //15
    value -= 3;
    std::cout << value << std::endl; //12
    value *= 2;
    std::cout << value << std::endl; //24
    value /= 4;
    std::cout << value << std::endl; //6
    value %= 3;
    std::cout << value << std::endl; //0

    return 0;
}