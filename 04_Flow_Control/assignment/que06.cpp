#include <iostream>

int main(){
    int year {};
    std::cout << "Please enter a year : " << std::endl;
    std::cin >> year;

    if(year%100==0){
        if(year%400==0){
            std::cout << "a leap year" << std::endl;
        }else{
            std::cout << "Not a leap year" << std::endl;
        }
    }

    else if(year%4==0){
        std::cout << "a leap year" << std::endl;
    }

    else{
        std::cout << "Not a leap year" << std::endl;
    }


    return 0;
}