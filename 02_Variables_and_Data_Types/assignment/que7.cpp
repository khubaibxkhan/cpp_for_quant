/*Take input:
Name
Age
CGPA
Grade
Hostel (true/false)
Print everything in a formatted way.
Use appropriate data types.*/
#include <iostream>
#include <string>

void studentInfo(std::string name, signed short age, float cgpa, char grade, bool hostel){
    std::cout << std::boolalpha;

    std::cout << "===============STUDENT-INFO===============" << std::endl;
    std::cout << "Student-Name : " << name << std::endl;
    std::cout << "Age : " << age << std::endl;
    std::cout << "CGPA : " << cgpa << std::endl;
    std::cout << "Grade : " << grade << std::endl;
    std::cout << "Hostel : " << hostel << std::endl;
    std::cout << "==========================================" << std::endl;
}

int main(){
    std::string name {""};
    signed short age {0};
    float cgpa {0};
    char grade {};
    bool hostel {};

    std::cout << "Enter your full-name : ";
    std::getline(std::cin,name);
    std::cout << "Enter your age : ";
    std::cin >> age; 
    std::cout << "what was your CGPA : ";
    std::cin >> cgpa; 
    std::cout << "what grade you got : ";
    std::cin >> grade; 
    std::cout << "Hostel (true/false) : ";
    std::cin >> hostel; 

    studentInfo(name,age,cgpa,grade,hostel);
    return 0;
}