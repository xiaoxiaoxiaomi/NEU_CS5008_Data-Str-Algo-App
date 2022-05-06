//**********************************************************
// Program: Telephone Digits
// This is an example of a sentinel-controlled loop. This 
// program converts uppercase letters to their corresponding
// telephone digits.
//********************************************************** 

#include <iostream>

using namespace std;

int main()
{
    char letter;
    int digit, num;

    cout << "Program to convert uppercase letters to " << "their corresponding telephone digits." << endl;                                      //Line 8

    cout << "To stop the program enter #." << endl;

    cout << "Enter an uppercase letter: ";
    cin >> letter;
    cout << endl;

    while (letter != '#')
    {
        cout << "Letter: " << letter;
        cout << ", Corresponding telephone digit: ";

        num = static_cast<int>(letter) - static_cast<int>('A');
        if (0 <= num && num < 26)
        {                                              
            switch (num) {
            case 0:
            case 1:
            case 2:
                cout << 2 << endl;
                break;
            case 3:    
            case 4:
            case 5:
                cout << 3 << endl;
                break;
            case 6:
            case 7:
            case 8:
                cout << 4 << endl;
                break;
            case 9:
            case 10:
            case 11:
                cout << 5 << endl;
                break;
            case 12:
            case 13:
            case 14:
                cout << 6 << endl;
                break;
            case 15:
            case 16:
            case 17:
            case 18:
                cout << 7 << endl;
                break;
            case 19:
            case 20:
            case 21:
                cout << 8 << endl;
                break;
            case 22:
            case 23:
            case 24:
            case 25:
                cout << 9 << endl;
                break;
            default:
                break;
    }      
        }                                              
        else
            cout << "Invalid input." << endl;          

        cout << "\nEnter another uppercase " << "letter to find its corresponding " << "telephone digit." << endl;
        cout << "To stop the program enter #." << endl;

        cout << "Enter a letter: ";                    
        cin >> letter;
        cout << endl;
    }
    return 0;
}