#include <iostream>

using namespace std;

int x = 1000;

void local()
{
    int x = 300;
    cout << "The local variable x from local function: " << x << endl;
}

int main()
{
    int x = 10;
    cout << "The local variable x from main function: " << x << endl;

    local();

    ::x++;

    cout << "The global variable x : " << ::x << endl;

    return 0;
}
