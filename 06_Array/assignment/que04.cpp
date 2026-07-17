    //reverse an array
    #include <iostream>

    int main(){
        int array[5] {}; 
        int array1[5] {};
        size_t i{};

        for(i=0;i<5;i++){
            std::cout << "Enter element "<< i << " : ";
            std::cin>> array[i];
        }

        std::cout << "Array you entered : [ ";
        for(i=0;i<5;i++){
            std::cout << array[i] << " ";
            array1[4-i]=array[i];
        }
        std::cout << "]\n";

        std::cout << "its reverse : [ ";
        for(i=0;i<5;i++){
            std::cout << array1[i] << " ";
        }
        std::cout << "]";


        return 0;
    }