#include <iostream>
using namespace std;

int main()
{
    bool a = 1, b = 0;

    cout << (a && b) << endl;
    cout << (a || b) << endl;
    cout << !(a && b) << endl;
    cout << !(a || b) << endl;
    cout << !a << endl;
    cout << !b << endl;

    cout << (((5 > 6) && (7 == 7)) || (1 || 0)) << endl;

    return 0;
}
