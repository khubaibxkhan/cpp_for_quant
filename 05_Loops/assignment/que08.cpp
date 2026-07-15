#include <iostream>


int main(){
    int value {};

    int prev {0};
    int current {1};
    int next {};
    

    std::cout << "Enter an Integer : ";
    std::cin >> value;

    if(value>0){
            std::cout << " " << prev << " " << current;
            for(size_t i=1; i <= value-2 ; i++){
                next = prev + current;
                std::cout << " " << next;
                prev = current;
                current = next;
            }
    }else{
        std::cout<< "please enter a positive integer";
        return 0;
    }
    return 0;
}