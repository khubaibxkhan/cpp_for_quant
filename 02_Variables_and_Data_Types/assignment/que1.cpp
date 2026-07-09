//Declare one variable of each type: int , short , long , long long , float , double , char and bool;

#include <iostream>

int main(){
    int bike_count {10};
    short cars_count {4};
    long paise {1000};
    long long timestamps {12565512};
    float bankbalance {124.56f};
    double distance {197.23434};
    char character {'F'};
    bool flag {true};

    std::cout << "int : bike_count : " << bike_count << " : " << sizeof(bike_count) << " Byte" << std::endl;
    std::cout << "short : cars_count : " << cars_count << " : " << sizeof(cars_count) << " Byte" << std::endl;
    std::cout << "long : paise : " << paise << " : " << sizeof(paise) << " Byte" << std::endl;
    std::cout << "long long : timestamps : " << timestamps << " : " << sizeof(timestamps) << " Byte" << std::endl;
    std::cout << "float : bankbalance : " << bankbalance << " : " << sizeof(bankbalance) << " Byte" << std::endl;
    std::cout << "double : distance : " << distance << " : " << sizeof(distance) << " Byte" << std::endl;
    std::cout << "char : character : " << character << " : " << sizeof(character) << " Byte" << std::endl;
    std::cout << "bool : flag : " << flag << " : " << sizeof(flag) << " Byte" << std::endl;

    return 0;
}