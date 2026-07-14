//Input marks of Physics Chemistry Maths and then Print Total Average Percentage;
#include <iostream>

double total(double marks1 , double marks2 ,double marks3){
    return marks1+marks2+marks3;
}



int main(){
    double maths {};
    double physics {};
    double chemistry {};

    std::cout << "Marks obtained in maths : ";
    std::cin >> maths;
    std::cout << "Marks obtained in Physics : ";
    std::cin >> physics;
    std::cout << "Marks obtained in Chemistry : ";
    std::cin >> chemistry;

    double total_marks = total(maths , physics , chemistry);

    std::cout << std::endl;
    std::cout << "Marks obtained in total: " << total_marks << std::endl;
    std::cout << "Average Marks obtained: " << total_marks/3 << std::endl;
    std::cout << "Percentage : " << (total_marks/300)*100 <<"%" << std::endl; //or total/3 

    if(total_marks>120){
        if(maths>40 && chemistry>40 && physics>40){
            std::cout << "Passed !!" << std::endl;
        }
        else{
            std::cout << "failed !!" << std::endl;
        }

    }else{
        std::cout << "failed !!" << std::endl;
    };
}