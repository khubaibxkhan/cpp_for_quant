#include <iostream>
#include <cmath>

int main(){
    int value {};
    bool isPrime {true};
    
    std::cout << "Enter an Integer : ";
    std::cin >> value;
    if(value>0){
            for(size_t i=2; i <= std::sqrt(value) ; i++){
                if(value%i==0){
                    isPrime = false;
                    break;
                }
            }
    }else{
        std::cout<< "please enter a positive integer";
        return 0;;
    }

    std::cout << ((isPrime) ? "Prime" : "Not Prime") << std::endl;

    return 0;
}