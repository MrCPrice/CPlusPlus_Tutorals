#include <iostream>

int main(){

    int elephant_count; //will give a random farbage value
    int lion_count{}; //will asign it to zero by default
    int dog_count {10}; //can also use () instead of {}
    int cat_count{15};

    int domesticated_animals{dog_count + cat_count};

    //int bad_intialization{doesnt_exist1 + doesnt_exist2}; this will give an error bc it doesnt exist

    //int narrowing_conversion{2.9}; //if use () you will loss .9 {} will give u a compiler error

    std::cout << "sizeof int: " << sizeof(int) << std::end1; //sizeof checks the memory size in bytes 
    std::cout << "sizeof int for dog_count: " << sizeof(dog_count) << std::end1;

    unsigned int value1{10}; 
    signed int value2{-100}; 
    //^these are modifiers

    /*
    this signed is a modifier that allows negitive numbuer to -2,000,000,000:2,000,000,000
    there is also unsigned that possitive numbers up to 0:4,000,000,000
    int will allow negitive numbers however if only want to work with possitive number use unsigned
    */

    std::cout << "Value1: " << value1 << std::endl;
    std::cout << "Value2: " << value2 << std::endl;

    short sort_var; //going to be 2 bytes in memory 
    long long_var;//going to 4 OR 8 bytes in memory 

    //Fractional Numbers

    /*there are three types 
    Types       size    Precision
    float       4       7
    double      8       15
    long double 12      >double
    */

    //precision is number of numbers 1.01 has 3 precision
    //floating point numbers in memory use the standard IEEE_754

    /*
    with floating numbers you can / by 0 can get infinity(+/-)
    also you might get NaN (not a number).
    You shouldnt do this can lead to crashes in your program
    */

    float number1{1.1234567890234567890f};
    double number2{1.1234567890234567890};
    long double number3{1.1234567890234567890L};
                                           //^ this is suffix as well as the f in float 

    std::cout << "Number 1: " << number1 << std::endl;
    std::cout << "Number 2: " << number2 << std::endl;
    std::cout << "Number 3: " << number3 << std::endl;

    double number4{1.92400023e8};//the number precision 8  
    double number5{1.924e8};//will pad 0 in the number
    double number7{3.4988e-11};//will / by 11

    //Booleans
    //true --> 1
    //false --> 0
    //boolean takes up 1 byte

    bool red_light{true};
    bool green_light{false};

    std::cout << " red_light is: " << red_light << std::endl;
    std::cout << " green_light is: " << green_light << std::endl;

    //char and text
    //char takes up 1 byte
    //use the ASCII (American Standard Code for Information Interchange) table

    char val1{'c'};
    char val2{97};//97 is a on ASCII table
    char val3{'t'};

    std::cout << val1 << val2 << val3 << std::endl;
    std::cout << "a in ASCII is number: " << static_cast<int>(val2) << std::endl;

    //Auto
    //this will guess the data type for us which will be down to the compiler to understand. 

    auto var1{12};
    auto var2[13.0];
    auto var3{14.0f};
    auto var4{15.0l};
    auto var5{'e'};
    auto var6{123u};//u is for unsigned int

    std::cout << "Auto1: " << var1 << "Auto2: " << var2 << "Auto3: " << var3 << "Auto4: " << var4 << "Auto5: " << var5 << "Auto6: " << var6 << std::endl;

    //can use sizeof() funcation to check size in memormy.

    //To declare a varibles can use () or best to use {}
    //the assign operator which is = can change varibles

    auto declare{123};

    std::cout << "Devlare is: " << declare << std::endl;

    declare = 22;

    std::cout << "Devlare is: " << declare << std::endl;

    /*
    Make you when u re assign a varible that 
    the data type is able to understand wath it
    is otherwise can get errors. 
    */

    return 0;
}