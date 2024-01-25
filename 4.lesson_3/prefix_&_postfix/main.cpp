#include <iostream>

int main(){

    //Incrementing value with postfix
    int value{5};
    std::cout << "Value is (incrementing): " << value++ << std::endl;
    std::cout << "Value is now (incremented): " << value << std::endl;

    //Decrement with postfix
    //rest value 
    value = 5;
    std::cout << "Value is (decrementing): " << value-- << std::endl;
    std::cout << "Value is now (decremented): " << value << std::endl;

    //Can also prefix 
    value = 5;
    ++value;
    std::cout << "Value is: " << value << std::endl;

    //Or can do it this way
    value = 5;
    std::cout << "Value is: " << ++value << std::endl;

    return 0;
}