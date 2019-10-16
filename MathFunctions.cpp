//
// Created by Alex on 16/10/2019.
//
#include "MathFunctions.h"

//=============== Addition ====================
float MathFunctions::addition()
{
    int NUMBER_OF_NUMS;
    float USER_INPUT;
    int TOTAL_ADDITION = 0;
    std::cout << "You have chosen Addition\n"
                 "How many numbers would you like to add? :";
    std::cin >> NUMBER_OF_NUMS;
    for (int i = 1; i < NUMBER_OF_NUMS+1; i++)
    {
        //std::cout << "Index " << i << std::endl;
        std::cout << "Number " << i << ":";
        std::cin >> USER_INPUT;
        TOTAL_ADDITION += USER_INPUT;
    }
    return TOTAL_ADDITION;
}


//============== Subtraction ==================
float MathFunctions::subtraction()
{
    int AMOUNT_OF_NUMBERS_TO_SUBTRACT = 0;
    float USER_INPUT;
    float TOTAL_SUBTRACTION = 0;

    std::cout << "You have chosen Subtraction.\n"
                 "What's your number to subtract from? :";
    std::cin >> TOTAL_SUBTRACTION;

    std::cout << "Amount of numbers to subtract? :";
    std::cin >> AMOUNT_OF_NUMBERS_TO_SUBTRACT;

    for (int i = 1; i < AMOUNT_OF_NUMBERS_TO_SUBTRACT+1; i++)
    {
        //std::cout << "Index " << i << std::endl; //DEBUG INFO: Index
        std::cout << "Number " << i << ":";
        std::cin >> USER_INPUT;
        TOTAL_SUBTRACTION -= USER_INPUT;
    }

    return TOTAL_SUBTRACTION;
}


//============ Multiplication =================
float MathFunctions::multiplication()
{
    int float_multiply_amount;
    float user_input;
    int total_multiplication = 0;
    std::cout << "You have chosen multiplication\n"
                 "How many numbers would you like to multiply? :";
    std::cin >> float_multiply_amount;
    for (int i = 1; i < float_multiply_amount + 1; i++)
    {
        //std::cout << "Index " << i << std::endl;
        std::cout << "Number " << i << ":";
        std::cin >> user_input;
        if (i == 1)
        {
            total_multiplication = user_input;
        }
        else
        {
            total_multiplication = total_multiplication * user_input;
        }

    }
    return total_multiplication;
}

