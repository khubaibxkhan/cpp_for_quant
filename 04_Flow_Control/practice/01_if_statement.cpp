#include <iostream>

int main(){
    int number1 {75};
    int number2 {65};

    bool result = (number1<number2);

    std::cout << std::endl;
    std::cout << std::boolalpha << "result : " << result << std::endl;

    if(result==true){
        std::cout << number1 << " is less than " << number2 << std::endl;
   }else{
        std::cout << number1 << " is not less than " << number2 << std::endl;
   }

   return 0;
}