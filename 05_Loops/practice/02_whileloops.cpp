#include <iostream>

int main(){
    const signed int COUNT {4};
    unsigned int i {0};

    while ( i < COUNT ){
        
        std::cout << "i love c++ " << std::endl;
        i++;
    }
    return 0;
}