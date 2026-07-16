#include <iostream>

int main(){
    int scores[] {10,20,30,9,5,4,7};
    int sum {0};

    for(int element : scores){
        sum += element;
    }
    std::cout << "Sum of elements : " << sum << std::endl;

    return 0;
}