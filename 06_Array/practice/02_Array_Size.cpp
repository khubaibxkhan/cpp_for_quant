#include <iostream>

int main(){
    int scores[] {10,20,30,9,5,4,7};

    std::cout << "Score size : " << std::size(scores) << std::endl;

    for( size_t i{0}; i < std::size(scores); i++){
        std::cout << "Scores[" << i << "} : " << scores[i] << std::endl;
    }

    return 0;
}