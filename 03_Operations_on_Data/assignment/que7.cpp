//Print the minimum and maximum values of: int , short , long , float , double 

#include <iostream>
#include <limits>
int main(){
    int kbb {14};

    std::cout << "Minimum value of int type : " << std::numeric_limits<int>::min() << std::endl;
    std::cout << "Maximum value of int type : " << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Minimum value of short type : " << std::numeric_limits<short>::min() << std::endl;
    std::cout << "Maximum value of short type : " << std::numeric_limits<short>::max() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Minimum value of long type : " << std::numeric_limits<long>::min() << std::endl;
    std::cout << "Maximum value of long type : " << std::numeric_limits<long>::max() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Minimum value of float type : " << std::numeric_limits<float>::min() << std::endl;
    std::cout << "Maximum value of float type : " << std::numeric_limits<float>::max() << std::endl;
    std::cout << std::endl;
    
    std::cout << "Minimum value of double type : " << std::numeric_limits<double>::min() << std::endl;
    std::cout << "Maximum value of double type : " << std::numeric_limits<double>::max() << std::endl;
    std::cout << std::endl;

    return 0;
}