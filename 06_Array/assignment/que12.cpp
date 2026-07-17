//Q3 Left Rotate by One ⭐⭐
#include <iostream>

int main(){
    int array[] {1,2,3,4};
    int array1[4] {};

   for(int i=0;i<4;i++){
            std::cout<<array[i]<<" ";
    }
    std::cout<<std::endl;

    array1[3] = array[0];
    for(int i = 1; i < 4; i++){
        array1[i - 1] = array[i];
    }
    for(int i=0;i<4;i++){
            std::cout<<array1[i]<<" ";
    }
}