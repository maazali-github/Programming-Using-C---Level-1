#include <iostream>

using namespace std;

void local_x(int x)
{
    x = 300;
    cout << "Number x inside local function: " << x << endl;
}

void local_y(int &y)
{
    // will modify the y itself because I passed the address of y to the procedure
    y = 500;
    cout << "Number y inside local function: " << y << endl;
}

int main()
{
    int x = 10, y = 20;

    local_x(x);
    cout << "Number x inside main function: " << x << endl;

    local_y(y);
    cout << "Number y inside main function: " << y << endl;

    // Address
    cout << "Address of y: " << &y << endl;

    return 0;
}
