#include <iostream>

int main(){
    //Compound operators
    int value{45};
    std::cout << "1)Value is: " << value << std::endl;//45
    value += 5; //Compound operators will mathmaticly change value so in this case it will add 5 to 45
    std::cout << "2)Value is: " << value << std::endl;//50
    value -= 5;
    std::cout << "3)Value is: " << value << std::endl;//45
    value *= 2;
    std::cout << "4)Value is: " << value << std::endl;//90
    value /= 3;
    std::cout << "5)Value is: " << value << std::endl;//30
    value %= 11;
    std::cout << "6)Value is: " << value << std::endl;//8

    //Relational operators
    //Use to comparing
    int number1{45};
    int number2 {60};

    std::cout << std::boolalpha;//Makes boolean show up as true OR false instead of 1 OR 0
    std::cout << "Number1 < number2: "  << (number1 < number2) << std::endl;//The () will stop a compiler error bc << has a high priority than <
    std::cout << "Number1 <= number2: "  << (number1 <= number2) << std::endl;
    std::cout << "Number1 > number2: "  << (number1 > number2) << std::endl;
    std::cout << "Number1 >= number2: "  << (number1 >= number2) << std::endl;
    std::cout << "Number1 == number2: "  << (number1 == number2) << std::endl;
    std::cout << std::noboolalpha;//This make it so true OR false will show back as 1 OR 0
    std::cout << "Number1 != number2: "  << (number1 != number2) << std::endl;

    return 0;
}