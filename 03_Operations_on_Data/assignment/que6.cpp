#include <iostream>
#include <string>
int main(){
    std::string username {};
    int password {};

    std::cout << "Insert username : ";
    std::getline(std::cin,username);
    std::cout << "Insert Password: ";
    std::cin >> password;

    if(username=="admin" && password==1234){
        std::cout << "access granted";
    }else{
        std::cout << "access denied";
    }
    return 0;
}