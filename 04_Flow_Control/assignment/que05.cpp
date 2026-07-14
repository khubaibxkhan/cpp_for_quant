#include <iostream>

void show_balance( double balance){
    std::cout << "your current balance is : $" << balance << std::endl;
}

double deposit_amount( double balance,double deposit){
    return balance + deposit;
}
double withdraw_amount( double balance, double withdraw){
    return balance - withdraw;
}

int main(){
    double balance {6500};
    double deposit {};
    double withdraw {};

    int number {};
    std::cout << "======================" << std::endl;
    std::cout << "Bank-Menu" << std::endl;
    std::cout << "1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\nWhat you wanted to choose: ";
    std::cin >> number;

    switch (number){
        case 1: {
            show_balance(balance);
            break;
        }
        case 2: {
            std::cout << "Enter the amount you want to deposit : $";
            std::cin >> deposit;

            balance = deposit_amount(balance,deposit);

            show_balance(balance);
            deposit = 0;
            break;
        }
        case 3: {
            std::cout << "Enter the amount you want to withdraw : $";
            std::cin >> withdraw;

            balance = withdraw_amount(balance,withdraw);
            
            show_balance(balance);
            withdraw = 0;
            break;
        }
        case 4: {
            return 0;
        }
        default: {
            std::cout << "Please choose a valid option";
        }
    }
}