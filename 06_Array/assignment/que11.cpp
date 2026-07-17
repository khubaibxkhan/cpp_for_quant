//Print the second largest distinct element.
#include <iostream>

int main(){
    int SIZE = 100;
    int array[SIZE] {};
    int largest {INT_MIN};
    int second_largest{};

    int n {};

    std::cout << "How many inputs you want in your array : ";
    std::cin >> n;

    for(int i=0;i<n;i++){
        std::cout << "Enter element "<< i << " : ";
        std::cin>> array[i];
    }

    for(int i=0;i<n;i++){
        if(largest<=array[i]){
            largest = array[i];
        }
        if(second_largest<array[i]){
            if(largest==array[i]){
                second_largest=second_largest;
            }else{
                second_largest = array[i];
            }
        }
    }

    std::cout << "largest element is " << largest << std::endl;
    std::cout << "second largest element is " << second_largest;


}