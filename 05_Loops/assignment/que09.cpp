    #include <iostream>

    int main(){
        int secret {42};
        int value {};
        size_t i{0};

        do{
            std::cout << "Guess the 2 digit Secret number : ";
            std::cin >> value;
            if(value!=secret){ std::cout << "Access denied!" << std::endl;}
        }while(value!=secret);
        std::cout << "Access granted" << std::endl;

        return 0;
    }