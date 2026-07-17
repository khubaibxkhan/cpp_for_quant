//Take input from the user and print all the elements.
#include <iostream>

int main(){
    int array[5] {}; //as i dont want to initialize with garbage value
    size_t i {};



    for(i;i<5;i++){
        std::cout << "Enter element "<< i << " : ";
        std::cin>> array[i];
    }

    std::cout << "Array you entered : [ ";
    for(i=0;i<5;i++){
        std::cout << array[i] << " ";
    }
    std::cout << "]";

    return 0;
}