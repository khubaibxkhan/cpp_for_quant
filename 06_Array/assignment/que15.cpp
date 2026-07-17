//Q6 Count Positive, Negative and Zero ⭐⭐
#include <iostream>

int main(){
    int array[] {4, -2, 0, 7, -5, 0};
    unsigned short isPos{};
    unsigned short isNeg{};
    unsigned short isZero{};

    for(int i=0;i<6;i++){

        std::cout << array[i] << " ";
              if(array[i]>0){
                isPos++;
              }
              else if(array[i]==0){
                isZero++;
              }
              else{
                isNeg++;
                    }
    }
    std::cout <<std::endl;
    std::cout << "Positive : " << isPos << std::endl;
    std::cout << "Negative : " << isNeg << std::endl;
    std::cout << "Zero : " << isZero << std::endl;

  
 
    return 0;
}