//printing odd and even
#include <iostream>

int main(){
    int array[] {2 ,7 ,5 ,4 ,10 ,13};
    unsigned short isEven{};
    unsigned short isOdd{};

    for(int i=0;i<6;i++){

        std::cout << array[i] << " ";
              if(array[i]%2==0){
                isEven++;
              }else{
                isOdd++;
                    }
    }
    std::cout <<std::endl;
    std::cout << "even : " << isEven << std::endl;
    std::cout << "ood : " << isOdd << std::endl;

  
 
    return 0;
}