// Prefix vs Postfix , Predict the output before running.
#include <iostream>

int main(){
    int a = 5;

    std::cout << a++ << std::endl; //5
    std::cout << ++a << std::endl; //7
    std::cout << a-- << std::endl; //7
    std::cout << --a << std::endl; //5

    return 0;
}