#include <iostream>
using namespace std;

int main()
{   
    short int a = 10;
    
    short b = a++;
    cout << "b = " << b << endl;
    cout << "a = " << a << endl;

    short c = ++a;
    cout << "b = " << c << endl;
    cout << "a = " << a << endl;

    return 0;
}
