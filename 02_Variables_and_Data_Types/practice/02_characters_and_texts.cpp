#include <iostream>

int main(){
    char value = 65;
    std::cout << value << std::endl;
    std::cout << static_cast<int>(value);

    return 0;
}