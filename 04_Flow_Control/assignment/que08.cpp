//Q1 Take two numbers from the user and print: Sum , Difference , Product , Quotient and Remainder
#include <iostream>

double Addition(double number1,double number2){
    return number1 + number2;
}

double Substraction(double number1,double number2){
    return number1 - number2;
}

double Multiplication(double number1,double number2){
    return number1 * number2;
}

double Division(double number1,double number2){
    return number1/number2;
}

int Remainder(int number1,int number2){
    return number1%number2;
}


int main(){
    double number1 {};
    double number2 {};
    int option {};

    std::cout << "Input Number 1 : ";
    std::cin >> number1;
    std::cout << "Input Number 2 : ";
    std::cin >> number2;
    

    std::cout<< std::endl;
    std::cout << "========== Calculator ==========\n1. Sum\n2. Difference\n3 Product\n4. Quotient\n5. Remainder\n================================\nChoose what u wanna do : ";
    std::cin >> option;
    switch (option){
        case 1: {
            std::cout << "Sum : " << Addition(number1,number2) << std::endl;
            break;
        }
        case 2: {
            std::cout << "Difference : " << Substraction(number1,number2) << std::endl;
            break;
        }
        case 3: {
            std::cout << "Product : " << Multiplication(number1,number2) << std::endl;
            break;
        }
        case 4: {
            std::cout << "Quotient : " << Division(number1,number2) << std::endl;
            break;
        }
        case 5: {
            std::cout << "Remainder : " << Remainder(number1,number2) << std::endl;
            break;
        }
        default: {
            std::cout << "Please choose a valid option!";
        }
    }

    return 0;
}