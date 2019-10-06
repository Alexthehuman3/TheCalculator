#include <iostream>

float addition()
{
    int NUMBER_OF_NUMS;
    float USER_INPUT;
    int TOTAL_ADDITION = 0;
    std::cout << "You have chosen Addition\n";
    std::cout << "How many numbers would you like to add? :";
    std::cin >> NUMBER_OF_NUMS;
    for (int i = 1; i < NUMBER_OF_NUMS+1; i++)
    {
        std::cout << "Index " << i << std::endl;
        std::cout << "Number " << i << ":";
        std::cin >> USER_INPUT;
        TOTAL_ADDITION += USER_INPUT;
    }
    return TOTAL_ADDITION;
}

float subtraction()
{
    int AMOUNT_TO_SUBTRACT = 0;
}

void menu()
{
    bool menu_Active = true;

    while (menu_Active)
    {
        std::string enter_To_Continue;
        int CHOICE;
        int SUM_OF_FUNCTION = 0;
        std::cout << "IMPORTANT: Please type a number then press Enter to access the functions provided in the menu\n";
        std::cout << "Type anything and press enter to continue: ";
        std::cin >> enter_To_Continue;
        std::cout << "========== Main Menu ==========\n"
                     "1.) Addition\n"
                     "2.) Subtraction (WIP)\n"
                     "0.) Quit\n";
        std::cout << "===============================\n";
        std::cout << "Choice? :";
        std::cin >> CHOICE;
        if (CHOICE == 1)
        {
            SUM_OF_FUNCTION = addition();
            std::cout << "The answer is "<< SUM_OF_FUNCTION << std::endl;;
        }

        if (CHOICE == 0)
        {
            menu_Active = false;
        }
    }
}



int main() {
    menu();
}



