//Factorial

#include <iostream>
int main(){
   int factorial {1}; 
   int value {};

    std::cout << "Enter an Integer : ";
    std::cin >> value;

    if(value>0){
        for(size_t i=value; i>=1 ;--i){
            factorial*=i;
        }
    }else{
        std::cout<< "please enter a positive integer";
        return 0;
    }


    std::cout << "factorial = " << factorial << std::endl;

    return 0;
}