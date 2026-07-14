#include <iostream>
#include <cmath>

int main(){
    int number1 {};
    int number2 {};

    std::cout << "Input Number 1 : ";
    std::cin >> number1;
    std::cout << "Input Number 2 : ";
    std::cin >> number2;

    std::cout<< std::endl;
    std::cout << "========== Calculator ==========" << std::endl;
    std::cout << "Square Root : " << std::sqrt(number1) << " and " << std::sqrt(number2)<< std::endl;
    std::cout << "Power : " << std::pow(number1,number2) << std::endl;
    std::cout << "Sine : " << std::sin(number1) << " and " << std::sin(number2) << std::endl;
    std::cout << "Cosine : "  << std::cos(number1) << " and " << std::cos(number2) << std::endl;
    std::cout << "Absolute : "  << std::abs(number1) << " and " << std::abs(number2) << std::endl;
    std::cout << "================================" << std::endl;
}