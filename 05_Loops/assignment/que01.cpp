#include <iostream>

int main(){
    short value {};

    std::cout << "Enter an Integer : ";
    std::cin >> value;

    if(value>0){
            for(size_t i=1; i<=value ;++i){
            std::cout << i << " ";
        }
    }else{
        std::cout<< "please enter a positive integer";
    }


    return 0;
}