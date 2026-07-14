#include <iostream>

int main(){
   char value {};
   int ascii {};

    std::cout << "Enter the character : ";
    std::cin >> value;

    ascii = static_cast<int>(value);

    if(ascii>=65 && ascii<=90){
        std::cout << "Uppercase! " << std::endl;
    }
    else if(ascii>=97 && ascii<=122){
        std::cout << "Lowercase! " << std::endl;
    }
    else if(ascii>=48 && ascii<=57){
        std::cout << "Digits! " << std::endl;
    }
    else if((ascii>=32 && ascii<=47) || (ascii>=58 && ascii<=64)){
        std::cout << "Special Characters! " << std::endl;
    }

    return 0;
}