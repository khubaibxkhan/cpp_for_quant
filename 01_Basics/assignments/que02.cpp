//Q2. User Greeting: Take the user's name as input and print.

#include <iostream>
#include <string>

int main(){
    std::string name;

    std::cout << "Enter your first name : " << std::endl;
    std::cin >> name;

    std::cout << "Hello " << name << ", Welcome to Quant Engineering!" << std::endl;

    return 0;

}