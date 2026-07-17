//linear search
#include <iostream>

int main(){
    int array[5] {};
    bool flag {true};
    int find{};

    for(int i=0;i<5;i++){
        std::cout << "Enter element "<< i << " : ";
        std::cin>> array[i];
    }

    std::cout << "Which element you wanna search ";
    std::cin>> find;

    for(int i=0;i<5;i++){
        if(find==array[i]){
            std::cout << "Found at index " << i << "\n";
            flag = false;
        }
    }

    if(flag) std::cout << "Element not found" << "\n";
 
    return 0;
}