#include <iostream>

int main(){
    int number1 {};
    int number2 {};
    int number3 {};

    std::cout << "Please enter a number1 : " << std::endl;
    std::cin >> number1;    
    std::cout << "Please enter a number2 : " << std::endl;
    std::cin >> number2;
    std::cout << "Please enter a number3 : " << std::endl;
    std::cin >> number3;

    if(number1 > number2 && number1 > number3){
        std::cout << "Largest number is " << number1 <<std::endl;
    }
    else if(number2 >= number1 && number2 >= number3){
        std::cout << "Largest number is " << number2 <<std::endl;
    }else if(number3 >= number1 && number3 >= number2){
        std::cout << "Largest number is " << number3 <<std::endl;
    }else if(number2 == number1 == number3){
        std::cout << "All numbers you've entered are equal" << std::endl;
    }

    return 0;
}