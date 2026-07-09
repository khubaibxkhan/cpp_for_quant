//Data Type Overflow
#include <iostream>

int main(){
    short number = 32767;
    number++;
    std::cout << number << std::endl;

    unsigned short number2 = 32767;
    number2++;
    std::cout << number2 << std::endl;

    int number3 = 32767;
    number3++;
    std::cout << number3 << std::endl;
     
    /*it is exceeding the shorts limit thats why it is wrapping around in the negative part we 
    increment by one so it just wrapped and started from its minimum number from the start; */

    return 0;
}