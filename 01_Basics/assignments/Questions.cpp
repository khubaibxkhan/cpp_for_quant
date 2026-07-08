#include <iostream>

int Sum(int num1 , int num2){
    int result = num1 + num2;
    return result;
}

int Difference(int num1 , int num2){
    int result = num1 - num2;
    return result;
}

int Product(int num1 , int num2){
    int result = num1 * num2;
    return result;
}

int Quotient(int num1 , int num2){
    int result = num1 / num2;
    return result;
}

int Area(int l, int b){
    int result = l*b;
    return result;
}

int CtoF(int c){
    int result = ((c*9) / 5) + 32;
    return result;
}


int main(){

    // Q1. write a program to print Hello Developer

    std::cout << "Hello, Khubaib!" << std::endl;
    std::cout << "Welcome to C++" << std::endl;

    // Q2:User Greeting: Take the user's name as input and print.

    std::cout << std::endl << "Q2: User Greeting " << std::endl;
    std::string name;
    std::cout << "Enter your first name : ";
    std::cin >> name;
    std::cout << "Hello " << name << ", Welcome to Quant Engineering!" << std::endl;

    //Q3: Input two integers. Print their sum , difference ,product & quotient.

    std::cout << std::endl << "Q3: Calculator " << std::endl;
    int numberA;
    int numberB;
    std::cout << "Enter number 1 : ";
    std::cin >> numberA;
    std::cout << "Enter number 2 : ";
    std::cin >> numberB;

    std::cout << "Sum :" << Sum(numberA,numberB) << std::endl;
    std::cout << "Difference :" << Difference(numberA,numberB) << std::endl;
    std::cout << "Product :" << Product(numberA,numberB) << std::endl;
    std::cout << "Quotient :" << Quotient(numberA,numberB) << std::endl;

    //Q4: Input: Length ,Width , and Print Area

    std::cout << std::endl << "Q4:  Area Calculator " << std::endl;
    int length;
    int width;

    std::cout << "Enter Length : ";
    std::cin >> length;
    std::cout << "Enter Width : ";
    std::cin >> width;

    std::cout << "Area : " << Area(length,width) << std::endl;

    //Q5: Input Celsius. Convert to Fahrenheit.

    std::cout << std::endl << "Q5: Temperature Converter" << std::endl;
    int celsius;

    std::cout << "Enter Celsius : ";
    std::cin >> celsius;

    std::cout << "Fahrenheit : " << CtoF(celsius) << std::endl;
   

    //Q6. Swaping Two Numbers
    std::cout << std::endl << "Q6. Swap Two Numbers" << std::endl;
    int a;
    int b;
    int c;

    std::cout << "Enter a : ";
    std::cin >> a;
    std::cout << "Enter b : ";
    std::cin >> b;
    std::cout << std::endl; 

    c = a;
    a = b;
    b = c;

    std::cout << "a: " << a << std::endl << "b: " << b << std::endl;

    // Q7 input user name , age and college.

    std::cout << std::endl << "Q7. Mini Profile" << std::endl;

    std::string userName;
    int age;
    std::string college;

    std::cout << "Enter name : ";
    std::cin >> userName;
    std::cout << "Enter age : ";
    std::cin >> age;
    std::cout << "Enter college : ";
    std::cin >> college;

    std::cout << "------ Profile ------" << std::endl;
    std::cout << std::endl << "Name : " << userName << std::endl;
    std::cout << "Age : " << age << std::endl;
    std::cout << "College: " << college << std::endl;
    std::cout << std::endl << "---------------------" << std::endl;




    return 0;
}