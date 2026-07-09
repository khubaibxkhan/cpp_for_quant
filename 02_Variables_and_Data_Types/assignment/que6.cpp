//Conversion of celsius to fahrenheit
#include <iostream>

double celsiusToFahrenheit(double celsius){
    return  (((celsius*9) / 5)+32);
}

int main(){
    double celsius {};

    std::cout << "Enter the temperature in celsius : ";
    std::cin >> celsius;

    std::cout << "Temperature in Fahrenheit : " << celsiusToFahrenheit(celsius) << "F" << std::endl;

    return 0;
}