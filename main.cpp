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

float addition(float x, float y)
{
    int NUMBER_OF_NUMS;
    std::cout << "You have chosen Addition\n";
    std::cout << "How many numbers would you like to add? :";
    std::cin >> NUMBER_OF_NUMS;
    std::cout << "Number 1: ";
    std::cin >> x;
}