//Q10 Mini Statistics ⭐⭐⭐

#include <iostream>

int main(){
    int SIZE = 100;
    int array[SIZE] {};

    int Sum {};
    int Average {};
    int Maximum {INT_MIN};
    int Minimum {INT_MAX};
    unsigned short isEven {};
    unsigned short isOdd {};

    int n {};

    std::cout << "How many inputs you want in your array : ";
    std::cin >> n;

    for(int i=0;i<n;i++){
        std::cout << "Enter element "<< i << " : ";
        std::cin>> array[i];
    }

    for(int i=0;i<n;i++){
        std::cout << array[i] << " ";
        Sum+=array[i];
        if(array[i]%2==0){
            isEven++;
          }else{
            isOdd++;
            }

        if(array[i]<Minimum) Minimum = array[i];
        if(array[i]>Maximum) Maximum = array[i];    
    }
    std::cout <<std::endl;
    std::cout << "Sum : " << Sum << std::endl;
    std::cout << "Average : " << Sum/n << std::endl;
    std::cout << "Min : " << Minimum << std::endl;
    std::cout << "Max : " << Maximum << std::endl;
    std::cout << "even : " << isEven << std::endl;
    std::cout << "odd : " << isOdd << std::endl;


}