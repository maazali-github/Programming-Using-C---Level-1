#include <iostream>
using namespace std;

int main()
{
    short int a, b;

    cout << "Please enter the first number a: \n";
    cin >> a;
    cout << "Please enter the second number b: \n";
    cin >> b;
    cout << (a == b) << endl;
    cout << (a != b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a > b) << endl;
    cout << (a < b) << endl;

    return 0;
}
