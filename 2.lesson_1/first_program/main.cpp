#include <iostream> // Brings in this library

int addNums( int first_param, int second_param){
    int result = first_param + second_param;
    return result;
}

int main(){
    // this is how to comment

    /*
    this is
    how to 
    do a 
    multi-line comment
    */

    std::cout << "Hello World!" << std::endl; //std::edm1 is creating a new line.
    std::cout << "Number1" << std::endl; //std::cout will put whats in "" into the console.
    std::cout << "Number2" << std::endl;

    int first_num {3};
    int second_num {7};
    int third_num {10};

    std::cout << "First Number: " << first_num << std::endl;
    std::cout << "Second Number: " << second_num << std::endl;

    int sum = first_num + second_num;
    std::cout << "Sum: " << sum << std::endl;

    sum = addNums(third_num, 2);
    std::cout << "Sum: " << sum << std::endl;

    std::cout << "Sum: " << addNums(56, 37) << std::endl;

    return 0; //if ends successfuly close. Good practics! 
}