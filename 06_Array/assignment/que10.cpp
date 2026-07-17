//Q1 Reverse In-Place ⭐⭐Reverse the array without creating another array.
#include <iostream>

int main(){

    int array[] {1, 2, 3, 4, 5, 6, 7, 8};
    int temp {};

        for(int i=0;i<8;i++){
        std::cout << array[i] << " ";
    }
    //i ran it to 8 and it first swap it then swap again back to normal lol 
    for(int i=0;i<4;i++){
        temp = array[i];
        array[i] = array[7-i];
        array[7-i] = temp; 


    }
    std::cout<<std::endl;
       for(int i=0;i<8;i++){
        std::cout << array[i] << " ";
    }
    


    return 0;;
}