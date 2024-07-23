#include <iostream>

using namespace std;

int main()
{
    int number;
    cout << "Enter Positive Number: ";
    cin >> number;

    while (number < 0)
    {
        cout << "Wrong number. Please Enter Positive Number: ";
        cin >> number;
    }

    cout << "The number you entered is: " << number << endl;

    return 0;
}
