#include <iostream> //use to import the all the preinstalled keywords like cout, endl ,etc. 
#include <string>

int addNumber(int first, int second){
    int addn = first + second;
    return addn;
}

// #1 Entry Point:

int main(){ //This is the entry point to our code

     //cout is use to print in terminal
    std::cout << "Hello World" << std::endl;
    //endl is use to add a new line after this line execution
    std::cout << "Number1" << std::endl ;
    std::cout << "Number2" << std::endl;
    std::cout << "Number3" << std::endl;
    
// #2 Comments:   

    //This is a single line comment 

    /* This is 
    a multi line comment 
    yes , you like it? */

// #3 Errors and warnings:
     
    /*
        A. Compile Time Error: Flaws detected by the compiler before the program runs
         Example:
            std:: cout << "Hello word";

        B. Runtime Error: Errors that happen during execution after successful compilation
         Example:
            int value = 7/0;
            std:: cout << "value": << value << std::endl;
        
    */

    // Not putting semicolon will result an compile time error.


// #4 Statements and Functions
     
    /*
        STATEMENTS: 
        
        A Statement is a basic unit of computation in C++ program , 
        every c++ program is a collection of statements organized in a certain way to achieve same goal
        statement ends with a semi-colon (;). 
        Statements executes in order from top to bottom when program runs
        Execution keeps going until hit the end of the program or if there is another condition causing termination 
        
        FUNCTION: 
        
        A function must be defined before its used.
        
    */

    int first_num {3}; // statement
    int second_num {7};

    std::cout << first_num << " + " << second_num << std::endl;

    int Sum = addNumber(first_num,second_num); // Calling function
    std::cout << "sum: " << Sum << std::endl;

    std::cout << "sum: " << addNumber(12,52) << std::endl;

// #5 Input and Output

    /*
        std::cout --> printing data to the console terminal 
        std::cin --> Reading data from the terminal 
        std::getline --> Reading data with spaces
        std::cerr --> printing error to the console
        std::clog --> printing log messages to the console
    */

    int age;
    std::string full_name;

    std::cout<< "Please enter your name and age: " << std::endl;
    
    std::getline(std::cin,full_name); //grab data with spaces
    std::cin >> age; //it can grab data but not spaces

    std::cout<< "Hello, " << full_name << " you are " << age << " years old. " << std::endl;

    std::cerr << "Error message: something is wrong!" << std::endl;
    std::clog << "Log message: Something happened." << std::endl;

    return 0;
}