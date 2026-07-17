//Take input from the user and print all the elements.
#include <iostream>

int main(){
    double marks[10] {};
    double sum {};
    double average {};
    size_t i {};

    for(i;i<10;i++){
        std::cout << "Enter element "<< i << " : ";
        std::cin>> marks[i];
    }

    std::cout << "Array you entered : [ ";
    for(i=0;i<10;i++){
        std::cout << marks[i] << " ";
        sum+=marks[i];
    }
    std::cout << "]" << std::endl;

    average = sum/10;

    std::cout << "Sum of the numbers in array are : " << sum << std::endl;
    std::cout << "Average of the numbers in array are : " << average << std::endl;

    return 0;
}