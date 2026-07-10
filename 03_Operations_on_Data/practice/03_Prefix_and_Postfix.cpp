#include <iostream>

int main(){
    int value {5};
    //increment postfix
    std::cout << "value (increment suffix): " << value++ << std::endl;
    std::cout << "value : " << value << std::endl;

    value = 5; //reset to 5
    //decrement postfix
    std::cout << "value (decrement suffix): " << value-- << std::endl;
    std::cout << "value : " << value << std::endl;

    value = 5; //reset to 5
    //increment prefix
    std::cout << "value (increment post): " << ++value << std::endl;
    std::cout << "value : " << value << std::endl;

    value = 5; //reset to 5
    //decrement prefix
    std::cout << "value (decrement post): " << --value << std::endl;
    std::cout << "value : " << value << std::endl;

    return 0;


}