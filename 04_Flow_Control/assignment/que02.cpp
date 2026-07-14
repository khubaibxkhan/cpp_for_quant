#include <iostream>

int main(){
    int number {};
    std::cout << "Please enter a number : " << std::endl;
    std::cin >> number;

    if(number%2==0){
        std::cout << "you've entered an even number!" << std::endl;
    }
    else{
        std::cout << "you've entered an odd number!" << std::endl;
    }

    return 0;
}