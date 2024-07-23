#include <iostream>

using namespace std;

enum enSystemColor {red = 1, blue = 2, green = 3, yellow = 4};

int main()
{
    cout << "===========\n";
    cout << "Choose color number: \n";
    cout << "(1) Red.\n";
    cout << "(2) Blue.\n";
    cout << "(3) Green.\n";
    cout << "(4) Yellow.\n";
    cout << "Your Choice: ";

    int c;
    enSystemColor color;

    cin >> c;
    cout << "===========\n";

    // Casting to enSystemColor enum
    color = (enSystemColor) c;

    if (color == enSystemColor::red)
    {
        cout << "Red\n";
    }
    else if (color == enSystemColor::blue)
    {
        cout << "Blue\n";
    }
    else if (color == enSystemColor::green)
    {
        cout << "Green\n";
    }
    else if (color == enSystemColor::yellow)
    {
        cout << "Yellow\n";
    }
    else
    {
        cout << "Black\n";
    }

    return 0;
}
