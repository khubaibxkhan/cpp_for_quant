    //Q8 Remove Duplicates (Sorted Array) ⭐⭐⭐⭐
    #include <iostream>
    int main(){
        int array[] {1, 1, 2, 2, 2, 3, 4, 4, 5};

        std::cout << array[0] << " ";
        for(int i=1;i<9;i++){
            if(array[i]!=array[i-1]) std::cout << array[i] << " ";
        }
    }