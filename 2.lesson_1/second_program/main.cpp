#include <iostream>
#include <string>

int main(){
    /*
    Different messages types out of the console
    std::cout << "Hello world" << std::endl; 
    std::cerr << "Error message!" << std::endl;
    std::clog << "Log message" << std::endl;
    */

   /*
    int age;
    std::string name;

    std::cout << "Please type your name and age: " << std::endl;
    std::cin >> name >> age;

    std::cout << "Hello " << name << " you are " << age << " year old!" << std::endl;
    */

    //Data with spaces
    
    std::string full_name;
    int age2;

    std::cout << "Please type your full name and age: " << std::endl;
    std::getline(std::cin,full_name); // will get spaces
    std::cin >> age2;

    std::cout << "Hello " << full_name << " you are " << age2 << " year old!" << std::endl;

    return 0;
}