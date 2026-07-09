// Simple Banking Program
#include <iostream>

int main(){
    double balance {1200.50};
    double withdraw {};
    double deposit {};
    double remaining_balance {};

    std::cout << "Your current balance : $" << balance << std::endl;
    std::cout << "Enter the amount you want to withdraw : $";
    std::cin >> withdraw;
    std::cout << "Enter the amount you want to deposit : $";
    std::cin >> deposit;
    
    remaining_balance = balance - withdraw + deposit;

    std::cout << "Remaining amount in your account is $" << remaining_balance << std::endl;

}
