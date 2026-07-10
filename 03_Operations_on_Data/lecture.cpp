//Basic operations 

            /*
                1. addition 
                2. substraction 
                3. division 
                4. multiplication
                5. modulus
            */

//Precedence and Associativity

            /* it is the set of rules that we can follow to know what to do when we have multiple operations in same expression
                                a+b*c-d/e-f+g
                
                
                Precedence: which operation to do first
                Assiciativity: in which direction or which order

                * / % have same precedence and + and - have same precedence 
                precedence of * / % is higher than + -
                and all of these 5 are left to right associative 
                and if we use brackets then it will solve bracket first

            */

//Prefix And Postfix + & -

//Compound assignment operator (a++ , ++a , a-- , --a)

            /* these are the operators that allow you to do an arithmetic operation like addition , substraction , multiplication ,division
            and modulus and assing the result to a value in one go*/

//Relational Operators: Comparing Stuff

            /*
                <, <=, >, >=, ==, !=, 
            */

//Logical Operators

            /*these works on booleans operants 
            &&-AND ||-OR !-NOT */

// Output formatting
            /*
                1. std::endl - we know it hahah
                2. we can use \n instead of endl, they do the same thing.
                    std::cout<< "LastName\n";

                3. std::flush - causes immediate sending of data to the device connected to the stream.
                    std::cout << "hello have a nice day!" << std::endl << std::flush;

                4. std::setw(number) - it creates a nice table artificial padding to the text 
                    std::cout << std::right;   {OPTIONAL}
                    set::cout << std::setfill('-') {OPTIONAL}
                    std::cout << std::setw(10) << "LastName" << std::setw(10) << "firstname" << std::setw(5) << "age" << std::endl;

                5. std::boolalpha and std::noboolalpha

                6. std::showpos and std::noshowpos --for positive number;

                7. std::dec , std::hex , std::oct  ---for showing data in different number systems.

                8. std::showbase and std::noshowbase --for showing base data for the number system.
                
                9. std::uppercase and std::nouppercase

                10. std::scientific and std::fixed --to manipulate big number data --default scientific

                11. std::setprecision() --to set precision for floating point integers

                12. std::showpoint() and std::noshowpoint()
            */

//Numeric limits

/*
    #include <limits>

*/

//maths function

            /*
                #include <cmath>
                you have alot of prebuild fuction there go check it out.
                
                std::abs() --absolute
                std::exp() --for exponential
                std::pow() --for the power exponent
                std::log() --for logarithmic fuction its with base e
                std::log10() --for log fuction with base 10
                std::sqrt() --for square root
                std::round() --for round off the number
                and all the trigonometry function
                    
            */

//Weird integral types:

            /*
                integral type less than 4bytes in size dont support arithmetic operations

                like char --1 bye and short -- 2 byte we cant do arithmetic operations on this type
                but our compilers are smart enough to implicitly convert them to int type and so the operations
            */