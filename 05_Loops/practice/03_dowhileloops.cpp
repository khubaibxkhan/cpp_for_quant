#include <iostream>

int main(){
    const signed int COUNT {10};

    size_t i{0};

    do{
        std::cout << "[ " << i << " ] : i love c++" << std::endl;
        i++;  
    }while(i<COUNT);

    return 0;
}