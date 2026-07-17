//Find Maximum and Minimum , do not use STL
#include <iostream>


int main(){
    size_t i {};
    int n {}; 
    int min {INT_MAX}; 
    int max {INT_MIN};
    int array[n] {};
    // wrong concept
    std::cout << "How many inputs you want in your array : ";
    std::cin >> n;

    for(i=0;i<n;i++){
        std::cout << "Enter element "<< i << " : ";
        std::cin>> array[i];
    }


    std::cout << "Array you entered : [ ";
    for(i=0;i<n;i++){
        std::cout << array[i] << " ";
        if(array[i]<min) min=array[i];
        if(array[i]>max) max=array[i]; 
    }
    std::cout << "]" << std::endl;
    std::cout << "Minimum element : " << min << std::endl;
    std::cout << "Maximum element : " << max << std::endl;



    return 0;
}