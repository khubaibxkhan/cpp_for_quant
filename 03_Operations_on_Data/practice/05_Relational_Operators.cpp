#include <iostream>

int main(){
    int number1 {60};
    int number2 {45};

    std::cout << "number1 : " << number1 << std::endl;
    std::cout << "number2 : " << number2 << std::endl;
    std::cout << std::boolalpha;

    std::cout << (number1>number2);
    
    return 0;
}   