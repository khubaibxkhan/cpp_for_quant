#include <iostream>

const int Pen{0};
const int Marker{30};
const int Eraser{10};
const int Rectangle{20};
const int Circle{40};
const int Ellipse{50};


int main(){
    int tool { Ellipse };

    if (tool == Pen){
        std::cout << "Active tool is Pen" << std::endl;
    }
    else if (tool == Marker){
        std::cout << "Active tool is Marker" << std::endl;
    }
    else if (tool == Eraser){
        std::cout << "Active tool is Eraser" << std::endl;
    }
    else if (tool == Rectangle){
        std::cout << "Active tool is Rectangle" << std::endl;
    }
    else if (tool == Circle){
        std::cout << "Active tool is Circle" << std::endl;
    }
    else if (tool == Ellipse){
        std::cout << "Active tool is Ellipse" << std::endl;
    }


    return 0;
}