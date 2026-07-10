#include <iostream>

const int Pen{0};
const int Marker{30};
const int Eraser{10};
const int Rectangle{20};
const int Circle{40};
const int Ellipse{50};


int main(){
    int tool { Marker };

       switch (tool){
        case Pen: {
            std::cout << "Active tool is Pen" << std::endl;
            break;
        }
        case Marker: {
           std::cout << "Active tool is Marker" << std::endl;
           break;
        }
        case Eraser: {
            std::cout << "Active tool is Eraser" << std::endl;
            break;
        }
        case Rectangle: {
            std::cout << "Active tool is Rectangle" << std::endl;
            break;
        }
        case Circle: {
            std::cout << "Active tool is Circle" << std::endl;
            break;
        }
        case Ellipse: {
            std::cout << "Active tool is Ellipse" << std::endl;
            break;
        }
        default: {
            std::cout << "no active tool" << std::endl;
            break;
        }
        
    }

    return 0;
}