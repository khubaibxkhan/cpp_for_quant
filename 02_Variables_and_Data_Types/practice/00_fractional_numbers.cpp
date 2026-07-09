#include <iostream>
#include <iomanip>

int main(){
    float number1 {1.12345678901234567890f};
    double number2 {1.12345678901234567890};
    long double number3 {1.12345678901234567890L};

    std::cout << std::setprecision(20);
    std::cout << number1 << std::endl;
    std::cout << number2 << std::endl;
    std::cout << number3 << std::endl;

    return 0;
}