
#include <iostream>
int main(){
   int value {};
   int reverse {};

    std::cout << "Enter an Integer : ";
    std::cin >> value;
    if(value>0){
        while(value>0){
            reverse = reverse*10 + value%10;
            value/=10;
        }   
    }else{
        std::cout<< "please enter a positive integer";
        return 0;
    }
    
     std::cout << "reverse of your number is : " << reverse;

    return 0;
}