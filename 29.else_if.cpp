#include <iostream>

using namespace std;

int main()
{
    int time = 15;
    if (time < 12)
    {
        cout << "Good Morning.\n";
    }
    else if (time < 20)
    {
        cout << "Good day.\n";
    }
    else 
    {
        cout << "Good night.\n";
    }
    return 0;
}
