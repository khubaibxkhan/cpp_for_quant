#include <iostream>

int main(){
    char message[5] {'H', 'e', 'l', 'l', 'o'};

    char message1[6] {'h', 'e', 'l', 'l', 'o' }; //here we have null terminator automatic by compiler

    char message2[] {'h', 'e', 'l', 'l', 'o' };//not a c string , no null char as well .. will get garbage after hello

    char message3[] {"Hello"}; //also define literal as c string.. implecit terminator is appeneded already by compiler

    
    std::cout << "message : " << message << std::endl;
    std::cout << "message1 : " << message1 << std::endl;
    std::cout << "message2 : " << message2 << std::endl;
    std::cout << "message3 : " << message3 << std::endl;
    std::cout << "message : ";
    for(char element: message){
        std::cout << element;
    }

    std::cout << std::endl;
    std::cout << std::size(message) << std::endl;

    message[1] = 'c';
    std::cout << "message : ";
    for(char element: message){
        std::cout << element;
    }


    return 0;

}