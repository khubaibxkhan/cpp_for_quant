#include <iostream>

int main(){
    int number {};
    std::cout << "Please enter a number : " << std::endl;
    std::cin >> number;

    if(number>0){
        std::cout << "you've entered a positive number!" << std::endl;
    }
    else if(number==0){
        std::cout << "you've entered a zero!" << std::endl;
    }
    else{
        std::cout << "you've entered a negative number!" << std::endl;
    }

    return 0;
}