//Input a character and Print: Character & ASCII Value;
#include <iostream>

int main(){
    char value {};

    std::cout << "Enter the character : ";
    std::cin >> value;

    std::cout << "=============================" << std::endl;
    std::cout << "Character : " << value << std::endl;
    std::cout << "ASCII : " << static_cast<int>(value) << std::endl;
    std::cout << "=============================" << std::endl;
    
    return 0;
}