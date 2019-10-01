#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Welcome to my program" << std::endl;
    int X = 0;
    int Y = 3;
    std::cout << "Insert number x here: ";
    std::cin >> X;
    std::cout << "Insert number y here: ";
    std::cin >> Y;
    std::cout <<"Your added number is "<< X+Y << std:: endl;
    return 0;
}