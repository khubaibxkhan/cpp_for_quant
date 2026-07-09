//Store these numbers: Decimal Binary Octal & Hexadecimal. All representing the value 20.
#include <iostream>

int main(){
    int decimal = 20;
    int binary = 0b10100;
    int octal = 024;
    int hexadecimal = 0x14;

    std::cout << "Decimal : " << decimal << std::endl;
    std::cout << "Binary : " << binary << std::endl;
    std::cout << "Octal : " << octal << std::endl;
    std::cout << "Hexadecimal : " << hexadecimal << std::endl;

    return 0;
}