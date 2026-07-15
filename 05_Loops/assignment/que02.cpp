//Print its multiplication table from 1 to 10.
#include <iostream>

int main(){
   int value {};

    std::cout << "Enter an Integer : ";
    std::cin >> value;

    if(value>0){
        for(size_t i=1; i<=10 ;++i){
            std::cout << value << " x " << i << " = "<< value*i << std::endl;
        }
    }else{
        std::cout<< "please enter a positive integer";
    }
    

    return 0;
}