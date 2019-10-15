//============= Libraries =====================
#include <iostream>
#include <cctype>
#include <cstring>


//============= Enter2Cont ====================
inline void WaitEnter()
{
    std::cout << "Press Enter to continue...";
    while (std::cin.get()!='\n');
}


//=========== Double-Check ====================
//variant 0 = Default, 1 = Function Retry
bool check_With_User(int variant)
{
    bool confirmation = true;
    bool return_Statement;
    std::string yesno;

    while (confirmation)
    {
        if (variant == 0)
        {
            std::cout << "Are you sure? (y/n):";
            std::cin >> yesno;
        }
        else if (variant == 1)
        {
            std::cout << "Do you want to retry? (y/n):";
            std::cin >> yesno;
        }
        else
        {
            std::cout << "ERROR: check_With_User out of recognised Variant";
            return_Statement = false;
            confirmation = false;
        }

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
    return return_Statement;
}


//=============== Addition ====================
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
        //std::cout << "Index " << i << std::endl;
        std::cout << "Number " << i << ":";
        std::cin >> USER_INPUT;
        TOTAL_ADDITION += USER_INPUT;
    }
    return TOTAL_ADDITION;
}


//============== Subtraction ==================
float subtraction()
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
float multiplication()
{
    int FLOAT_MULTIPLY_AMOUNT;
    float USER_INPUT;
    int TOTAL_MULTIPLICATION = 0;
    std::cout << "You have chosen multiplication\n"
                 "How many numbers would you like to multiply? :";
    std::cin >> FLOAT_MULTIPLY_AMOUNT;
    for (int i = 1; i < FLOAT_MULTIPLY_AMOUNT+1; i++)
    {
        //std::cout << "Index " << i << std::endl;
        std::cout << "Number " << i << ":";
        std::cin >> USER_INPUT;
        TOTAL_MULTIPLICATION = TOTAL_MULTIPLICATION * USER_INPUT;
    }
    return TOTAL_MULTIPLICATION;
}

//================ Menu =======================
void menu()
{
    bool menu_Active = true;

    while (menu_Active)
    {
        std::string enter_To_Continue;
        int CHOICE;
        int SUM_OF_FUNCTION = 0;
        bool choice_Repeat = true;
        bool confirmed;
        std::cout << "IMPORTANT: Please type a number then press Enter to access the functions provided in the menu\n";
        WaitEnter();
        std::cout << "========== Main Menu ==========\n"

                     "1.) Addition\n"
                     "2.) Subtraction\n"
                     "3.) Multiplication (WIP)\n"
                     "4.) Division (WIP)\n"
                     "5.) Power (WIP)\n"
                     "6.) Roots (WIP)\n"
                     "7.) Feature #7\n"
                     "8.) Finding X and Ys\n"
                     "9.) Shape Calculation Menu\n"
                     "0.) Quit\n"
                     "===============================\n"
                     "Choice? :";
        std::cin >> CHOICE;

        switch (CHOICE)
        {
            case 0:
                confirmed = check_With_User(0);
                if (confirmed)
                {
                    menu_Active = false;
                }
                break;

            case 1:
                while (choice_Repeat)
                {
                    SUM_OF_FUNCTION = addition();
                    std::cout << "The answer is "<< SUM_OF_FUNCTION << std::endl;
                    choice_Repeat = check_With_User(1);
                }
                break;

            case 2:
                while (choice_Repeat)
                {
                    SUM_OF_FUNCTION = subtraction();
                    std::cout << "The answer is "<< SUM_OF_FUNCTION << std::endl;
                    choice_Repeat = check_With_User(1);
                }
                break;

            case 3:
                while (choice_Repeat)
                {
                    SUM_OF_FUNCTION = multiplication();
                    std::cout << "The answer is "<< SUM_OF_FUNCTION << std::endl;
                    choice_Repeat = check_With_User(1);
                }

            default:
                std::cout << "Invalid Input! Please retry.\n";
        }
    }
}


//============== Template =====================
void functionName()
{

}


//================ Main =======================
int main() {
    menu();
}


