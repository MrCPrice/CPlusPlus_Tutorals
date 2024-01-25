#include<iostream>

const int Pen{10};
const int Marker{20};
const int Eraser{30};
const int Rectangle{40};
const int Circle{50};
const int Ellipse{60};

int main(){

    int tool{Circle};

    swtch(tool){
        case Pen: {
            std::cout << "Active tool is pen" << std::endl;
        }
        break;
        case Marker: {
            std::cout << "Active tool is marker" << std::endl;
        }
        case Eraser: {
            std::cout << "Active tool is eraser" << std::endl;
        }
        break;
        case Rectangle: {
            std::cout << "Active tool is rectangle" << std::endl;
        }
        break;
        case Circle: {
            std::cout << "Active tool is circle" << std::endl;
        }
        break;
        case Ellipse: {
            std::cout << "Active tool is ellipse" << std::endl;
        }
        break;
        default: {
            std::cout << "Nothing active" << std::endl;
        }
            break;
    }

    return 0;
}