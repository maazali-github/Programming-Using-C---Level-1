#include <iostream>
using namespace std;

int main()
{

    int MyAge = 28;
    cout << "My Age: " << MyAge << " Years Old." << endl;

    MyAge = 50;
    cout << "My Age: " << MyAge << " Years Old." << endl;

    // =========== Other Types ===========

    int myNumber = 23;
    float myFloat = 23.25;
    double myDouble = 23.2563;
    char character = 'M';
    string myText = "Maaz";
    bool myBoolean = true;

    cout << myNumber << endl;
    cout << myFloat << endl;
    cout << myDouble << endl;
    cout << character << endl;
    cout << myText << endl;
    cout << myBoolean << endl;
    cout << "=============\n";

    // ===================================

    int x = 5;
    int y = 10;
    int sum = x + y;

    cout << sum << endl;
    cout << "=============\n";

    // ===================================

    int z = 5;
    int w = 10;

    cout << w + z << endl;
    cout << "=============\n";

    // ===================================

    char char1 = 'a'; char char2 = 'b'; char char3 = 'c';
    cout << char1 << char2 << char3 << " Reversed is: " << char3 << char2 << char1 << endl;
    cout << "=============\n";

    // Constants

    const int MinutesPerHour = 60;      // Read only
    const float PI = 3.14;


    return 0;
}
