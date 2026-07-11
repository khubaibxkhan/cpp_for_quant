#include <iostream>
#include <iomanip>

float BMI_Calc(float weight, float height){
    std::cout << std::setprecision(4);
    return  weight / (height*height);
}

int main(){
    float weight {};
    float height {};

    std::cout << "Enter your weight in KG : ";
    std::cin >> weight;
    std::cout << "Enter your height in Meters : ";
    std::cin >> height;

    std::cout << std::endl;
    std::cout << "Your BMI : " << BMI_Calc(weight,height);
    
    return 0;
}