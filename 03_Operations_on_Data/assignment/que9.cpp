#include <iostream>

int main(){
    int x = 10;

    int y = 5;

    int z = x + y * 2 - 8 / 4; 
    /*
    10 + 5 * 2 - 8 / 4
    10 + 10 - 8 / 2
    10 + 10 - 2
    20 - 2
    18
    */

    /*
                * /  have same precedence and + and - have same precedence 
                precedence of * / % is higher than + -
                and all of these 5 are left to right associative 
    */
    std::cout << z;
}