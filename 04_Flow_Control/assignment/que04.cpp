//grade generator
#include <iostream>

void generate_grade(const int marks){
    if(marks<60){
        std::cout << "Fail " <<std::endl;
    }
    else if(marks<70){
        std::cout << "D" <<std::endl;
    }else if(marks < 80){
        std::cout << "C" <<std::endl;
    }else if(marks < 90){
        std::cout << "B" <<std::endl;
    }else if(marks<100){
        std::cout << "A" <<std::endl;
    }   
}
int main(){
    int marks {};
    std::cout << "Please enter your marks obtained: ";
    std::cin >> marks;

    std::cout << "Grade: ";
    generate_grade(marks);

    return 0;
}