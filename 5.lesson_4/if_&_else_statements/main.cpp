#include<iostream>

int main(){

    int number1{45};
    int number2{30};

    result = (number > number2);

    if(result == true){
        std::cout << "Number1 is bigger than number2" << std::endl;
    } else {
        std::cout << "Number2 is bigger than number1" << std::endl;
    }

    bool red{false};
    bool amber{false};
    bool green{true};
    bool policeStop{true};

    if(red == true){
        std::cout << "Stop" << std::endl;
    } else if(amber ==true){
        std::cout << "Slow down" << std::endl;
    } else {
        if(policeStop != false){ //this is nesting if statements
            std::cout << "Stop Police stop!" << std::endl;
        } else {
            std::cout << "Go" << std::endl;

        }
    }

    if(freen && !policeStop){ //this is the same but more compacted
        std::cout << "Go" << std::endl;
    } else {
        std::cout << "Stop" << std::endl;
    }

    return 0;
}