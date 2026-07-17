//Q5 Is Array Sorted? ⭐⭐
#include <iostream>

int main(){
    int array[5] {1, 2, 3, 4, 5};
    bool isSorted {true};

    for(int i=0;i<4;i++){
        if(array[i]>array[i+1]) isSorted = false;
    }

    std::cout << (isSorted? "Sorted" : "Not Sorted");

}