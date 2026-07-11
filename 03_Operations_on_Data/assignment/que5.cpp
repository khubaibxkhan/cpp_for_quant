#include <iostream>

int main(){
    int number1 {};
    int number2 {};

    std::cout << "Input Number 1 : ";
    std::cin >> number1;
    std::cout << "Input Number 2 : ";
    std::cin >> number2;

    std::cout << std::boolalpha;

    if(number1==number2){std::cout << "Number 1 is equals to number 2" << std::endl;}
    if(number1!=number2){std::cout  << "Number 1 is not equal to number 2" << std::endl;}
    if(number1>number2){std::cout << "Number 1 is greater than number 2" << std::endl;}
    if(number1<number2){std::cout << "Number 2 is greater than number 1" << std::endl;}

    return 0;
}