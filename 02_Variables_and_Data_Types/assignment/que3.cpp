//Input an integer. Print the corresponding character.
#include <iostream>

int main(){
    int ascii {};

    std::cout << "Enter the ASCII : ";
    std::cin >> ascii;

    std::cout << static_cast<char>(ascii);

    return 0;
}