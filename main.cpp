#include <iostream>
#include <cctype>
#include <cstring>


inline void WaitEnter()
{
    std::cout << "Press Enter to continue...";
    while (std::cin.get()!='\n');
}

bool areYouSure()
{
    bool confirmation = true;
    bool return_Statement;
    std::string yesno;

    while (confirmation)
    {
        std::cout << "Are you sure? (y/n):";
        std::cin >> yesno;

        if (yesno == "y")
        {
            return_Statement = true;
            confirmation = false;
        }
        else if (yesno == "n")
        {
            return_Statement = false;
            confirmation = false;
        }
        else
        {
            std::cout << "Invalid Input, please try again!\n";
        }
    }

    /*
    // ============= Attempt 2 =================
    bool return_Statement;
    switch (yesno)
    {
        case 1:
            return_Statement = true;
            break;
        case 2:
            return_Statement = false;
            break;
        default:
            std::cout << "Invalid Number, please try again!\n";
            return_Statement = false;
            break;
    }
     */
    return return_Statement;
}

float addition()
{
    int NUMBER_OF_NUMS;
    float USER_INPUT;
    int TOTAL_ADDITION = 0;
    std::cout << "You have chosen Addition\n"
                 "How many numbers would you like to add? :";
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
    return 0;
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
        WaitEnter();
        std::cout << "========== Main Menu ==========\n"
                     "1.) Addition\n"
                     "2.) Subtraction (WIP)\n"
                     "0.) Quit\n"
                     "===============================\n"
                     "Choice? :";
        std::cin >> CHOICE;
        if (CHOICE == 1)
        {
            SUM_OF_FUNCTION = addition();
            std::cout << "The answer is "<< SUM_OF_FUNCTION << std::endl;;
        }

        if (CHOICE == 0)
        {
            bool tempBool = areYouSure();
            if (tempBool)
            {
                menu_Active = false;
            }
        }
    }
}



int main() {
    menu();
}



