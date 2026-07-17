//Q4 Right Rotate by One ⭐⭐
#include <iostream>

int main(){
    int array[] {1,2,3,4,5};
    int array1[5] {};

   for(int i=0;i<5;i++){
            std::cout<<array[i]<<" ";
    }

    std::cout<<std::endl;

    array1[0] = array[4];
    for(int i = 0; i < 5; i++){
        array1[i + 1] = array[i];
    }

    for(int i=0;i<5;i++){
            std::cout<<array1[i]<<" ";
    }
}   