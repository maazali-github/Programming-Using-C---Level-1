#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    for (int i = 5; i >= 1; i--)
    {
        cout << i << endl;
    }

    for (int i = 1; i <= 10; i = i + 2)
    {
        cout << i << endl;
    }
    return 0;
}
