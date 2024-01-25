#include<iostream>
#include<iomanip>
#include<limits>
#include<cmath>

int main(){
    //Logical Operactors
    bool a{true};
    bool b{false};
    bool c{true};
    int d{45};
    int e{20};
    int f{11};

    std::cout << std::boolalpha;
    std::cout << "a && b: " << (a && b) << std::endl;
    std::cout << "a && c: " << (a && c) << std::endl;
    std::cout << "a && b && c: " << (a && b && c) << std::endl;

    std::cout << "a || b: " << (a || b) << std::endl;
    std::cout << "a || c: " << (a || c) << std::endl;
    std::cout << "a || b || c: " << (a || b || c) << std::endl;

    std::cout << "!a: " << (!a) << std::endl;
    std::cout << "!b: " << (!b) << std::endl;
    std::cout << "!c: " << (!c) << std::endl;

    std::cout << "(d > e) && (f < d)" << ((d>e)&&(f<d)) << std::endl;

    //Output Formating
    std::cout << "Hello world \n";
    std::cout << "Hello world" << std::endl;

    std::cout << "This is a nice message...." << std::endl << std::flush;//flush will take this straight to the commandline

    int col_width{10};
    std::cout << "Firstname:" << std::setw(col_width) << "Lastname:" << std::setw(col_width) << "Age:" << std::endl;//std::setw is use in library iomanip
    std::cout << "John" << std::setw(col_width) << "Doe" << std::setw(col_width) << "34" << std::endl;
    std::cout << "Mike" << std::setw(col_width) << "Robinson" << std::setw(col_width) << "29" << std::endl;

    //Numeric limits using limits library
    std::cout << "The Range for int: " <<std::numeric_limits<int>::min() << " to " << std::numeric_limit<int>::max() << std::endl;

    //Math Funcations using cmath library
    double weight{7.7};

    std::cout  << "Weight round to floor is: " << std::floor(weight) << std::endl;
    std::cout  << "Weight round to ceil is: " << std::ceil(weight) << std::endl;
    std::cout << "3^4 is: " << std::pow(3,4) << std::endl;

    return 0;
}