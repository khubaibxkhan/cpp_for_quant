//Q1 Take two numbers from the user and print: Sum , Difference , Product , Quotient and Remainder
#include <iostream>

int Addition(int number1,int number2){
    return number1 + number2;
}

int Substraction(int number1,int number2){
    return number1 - number2;
}

int Multiplication(int number1,int number2){
    return number1 * number2;
}

double Division(int number1,int number2){
    return number1/number2;
}

int Remainder(int number1,int number2){
    return number1%number2;
}


int main(){
    int number1 {};
    int number2 {};

    std::cout << "Input Number 1 : ";
    std::cin >> number1;
    std::cout << "Input Number 2 : ";
    std::cin >> number2;

    std::cout<< std::endl;
    std::cout << "========== Calculator ==========" << std::endl;
    std::cout << "Sum : " << Addition(number1,number2) << std::endl;
    std::cout << "Difference : " << Substraction(number1,number2) << std::endl;
    std::cout << "Product : " << Multiplication(number1,number2) << std::endl;
    std::cout << "Quotient : " << Division(number1,number2) << std::endl;
    std::cout << "Remainder : " << Remainder(number1,number2) << std::endl;
    std::cout << "================================" << std::endl;

    return 0;
}