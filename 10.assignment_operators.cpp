#include <iostream>
using namespace std;

int main()
{
    short a = 10, b = 20;

    a += b;
    cout << "a = " << a << endl;

    a -= b;
    cout << "a = " << a << endl;

    a *= b;
    cout << "a = " << a << endl;

    a /= b;
    cout << "a = " << a << endl;

    a %= b;
    cout << "a = " << a << endl;

    return 0;
}
