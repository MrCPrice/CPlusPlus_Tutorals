#include <iostream>

int main(){

    int number1{2};
    int number2{7};

    //Addition
    int result = number1 + number2;
    std::cout << "1)Result: " << result << std::endl;

    //Subtraction
    result = number1 - number2;
    std::cout << "2)Result: " << result << std::endl;

    //Multiplication
    result = number1 * number2;
    std::cout << "3)Result: " << result << std::endl;

    //Division
    result = number2 / number1;
    std::cout << "4)Result: " << result << std::endl;

    //Modulus OR Remainder
    result = number2 % number1; //Will give the remaining number so (7 % 2 = 1) bc 2 can go into 7 3 times a remaining is 1
    std::cout << "5)Result: " << result << std::endl;

    /*
    Prescedence: this is which operations to do get done before others
    Associativity: this is which direction or which order gets done.
    With Associativity some will start left-to-right and some are right-
    to-left.
    */

    int a{6};
    int b{3};
    int c{8};
    int d{9};
    int e{3};
    int f{2};
    int g{5};

    result = a+b*c-d/e-f+g; //6+3*8-9/4-2+5 OR 6+(3*8)-(9/3)-2+5 = 6+24-3-2+5 then it go throught left-to-right
    std::cout << "6)Result: " << result << std::endl;

    result = a/b*c+d-e+f; // 6/3*8+9-3+2 OR (6/3*8)+9-3+2 in the () it will start left-to-right and do the same again
    std::cout << "7)Result: " << result << std::endl;

    result = a+(b*c)-(d/e)-f+g; //Can use () to make clear which operations to do first or change which operation goes first. 
    std::cout << "8)Result: " << result << std::endl;

    result = (a+(b*c))-(d/e)-(f+g); // (6+(3*8))-(9/3)-(2+5)
    std::cout << "9)Result: " << result << std::endl;

    return 0;
}