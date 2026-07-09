#include <iostream>

int main(){
    bool red_light {true};
    bool green_light {false};

    if (red_light == true ) {
        std::cout << "Stop !" << std::endl;
    }else{
        std::cout << "GO !" << std::endl;
    }

    if (green_light){
        std::cout << "light is green" << std::endl;
    }else{
        std::cout << "light is not green" << std::endl;
    }

    std::cout << std::endl;
    std::cout << green_light << std::endl;
    std::cout << red_light << std::endl;

    std::cout << std::boolalpha ; //Force output to be True and False only not 0 and 1
    std::cout << green_light;
    std::cout << red_light;

    return 0;
}