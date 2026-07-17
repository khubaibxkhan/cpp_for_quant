//Merge 2 arrays
#include <iostream>

int main(){
    int array1[3] {1,2,3};
    int array2[3] {4,5,6};
    int  merge[6] {};

        for(int i=0;i<3;i++){
            merge[i]=array1[i];
            merge[i+3]=array2[i];
        }
        
    for(int i=0;i<6;i++){
       std::cout << merge[i] << " ";
    }
}