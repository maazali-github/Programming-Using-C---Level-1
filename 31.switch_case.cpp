#include <iostream>

using namespace std;

int main()
{
    int day = 4;

    switch (day)
    {
        case 1:
            cout << "Sunday";
            break;
        case 2:
            cout << "Monday";
            break;
        case 3:
            cout << "Tuesday";
            break;
        case 4:
            cout << "Wednesday";
            break;
        case 5:
            cout << "Thursaday";
            break;
        case 6:
            cout << "Friday";
            break;
        case 7:
            cout << "Friday";
            break;
        default:
            cout << "Wrong Day";
    }

    cout << endl;

    return 0;
}
