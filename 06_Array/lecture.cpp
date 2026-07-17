//initializing AND DECLARAING AN ARRAY
/*

    int scores [10];   --> an array storing 10 integers //it will store garbage data

    double salaries [5] {12.7 , 5.7 , 6.2 , 2.2 , 11.0};   // no garbage data here

    int families [5] {12 , 3 , 1}  --> //rest are going to be initialize to 0.

    int class_sizes[] {10 , 12 , 15 , 11 , 15 , 17};  //Omit the size of the array at declaraion 

    const int multipliers [] {2 , 5 , 3}; --> cant be modified  


*/

//OPERATIONS OF DATA STORED IN AN ARRAY
/* 
    int sum {0};

    fpr(int element : scores){
        sum+=element;
    }
*/

//READING DATA THROUGH A LOOP

/*
    for(size_t i{}; i<10 , i++){
        std::cout << "scores ["<< i << "] : " << scores [i] << std::endl;
    }
*/

//WRITING DATA  THROUGH LOOP
/*
for(size_t i{}; i<10 , i++){
        std::cin << scores [i];
    }

*/

//RANGE BASED FOR LOOPS (MAINLY USED FOR THE OMIT INITIALIZED ARRAYS)
/*
    for(auto value : class_sizes){
         std::cout << "value : " << value << std::endl;
    }
*/

// size(array_name) --> number of elements in the array;
// sizeof(array_name) --> size occupied in memory by array;
// sizeof(array[i]) --> size occupied in memory by that datatype of array;

//ARRAY OF CHARACTERS (direct print out)
/*
    char message[5] {'h', 'e', 'l', 'l', 'o'}
    std::cout << "message : " << message << std::endl;
*/

//cant  direct print any array other than char array 

//Null termination 
/*
    char message[5] {'h', 'e', 'l', 'l', 'o', '\0'}

*/

