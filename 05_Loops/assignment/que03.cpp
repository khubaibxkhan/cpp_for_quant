//Sum of First N Natural Numbers

#include <iostream>
int main(){
   int sum {}; 
   int value {};

    std::cout << "Enter an Integer : ";
    std::cin >> value;

    if(value>0){
        for(size_t i=1; i<=value ;++i){
            sum+=i;
        }
    }else{
        std::cout<< "please enter a positive integer";
        return 0;
    }
    

    std::cout << "Sum = " << sum << std::endl;

    return 0;
}