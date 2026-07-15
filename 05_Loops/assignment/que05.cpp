//number of digits
#include <iostream>

int main(){
   int value {};
    int digits {};
    std::cout << "Enter an Integer : ";
    std::cin >> value;

    if(value>0){
        while(value>0){
            value/=10;
            digits++;
        }  
        
    }else{
        std::cout<< "please enter a positive integer";
        return 0;
    }

     std::cout << "Number of digits your integer have : " << digits;

    return 0;
}