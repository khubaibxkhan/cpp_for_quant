#include <iostream>

int main(){

// #1 Number System and how to transform between them
    int number1 = 15;           //decimal
    int number2 = 017;          //octal
    int number3 = 0x0F;         //Hexadecimal
    int number4 = 0b00001111;   //Binary

    std::cout << "number 1 : " << number1 << std::endl;
    std::cout << "number 2 : " << number2 << std::endl;
    std::cout << "number 3 : " << number3 << std::endl;
    std::cout << "number 4 : " << number4 << std::endl;

// #2 Datatype:

    /*
    INTEGER:
        --> Stores decimal
        --> Typically occupies 4 bytes or more in memory. (16 Digits)

    VARIABLE:
        --> A named piece of memory that you use to store specific types of data.
        --> Variable may contain random garbage value
    */

// #3(a) Braced variable initialization:

    int elephant_count; //initialize with random garbage value
    int lion_count {}; //initialize with zero
    int dog_count {10}; //initialize with 10
    int cat_count {15}; //initialize with 15

    int domesticated_animals {dog_count + cat_count }; // we can use expressions as initializers

    // int narrow_conversion {2.9}; 
    //2.9 is double, with int range (Error warning)


// #3(b) Functional variable Initialization:

    int apple_count (5);
    int orange_count(10);
    int fruit_count( apple_count + orange_count);
    int narrow_conversion2 (2.9); //info lost. less safe than brace initializers 
                                  //it will chop the part after decimal only 2 will be print

// #3(c) Assignment initialization.

    int bike_count = 0;
    int truck_count = 10;
    int vehicle_count = bike_count + truck_count;
    int narrow_conversion_assignment = 2.9;

    // Size of a type in memory 
    std::cout << "sizeof int " << sizeof(int) << std::endl;
    std::cout << "sizeof Truck_count " << sizeof(truck_count) << std::endl;

// #4 Integer Type Modifiers:

    short a{-32768}; // 2  byte
    short int a{455}; //
    signed short a{122}; //
    signed short int a{-456}; //
    unsigned short a{456}; //
    unsigned short int a{455}; //

    long a{};  //4 or 8 byte
    long int a{}; //
    signed long a{}; //
    signed long int a{}; //
    unsigned long a{}; //
    unsigned long int a {}; //

    long long a{}; // 8 byte 
    long long int a {}; //
    signed long long a{}; //
    signed long long int a{}; //
    unsigned long long a{}; //
    unsigned long long int a{}; //

    return 0;
}