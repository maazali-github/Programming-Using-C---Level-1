#include <iostream>

using namespace std;

void read_array_data(int x[3])
{
    cout << "Enter x1: \n";
    cin >> x[0];
    cout << "Enter x2: \n";
    cin >> x[1];
    cout << "Enter x3: \n";
    cin >> x[2];
}

void print_array_data(int x[3])
{
    cout << "===========\n";
    cout << x[0] << endl;
    cout << x[1] << endl;
    cout << x[2] << endl;
}

int main()
{
    int x[3];

    read_array_data(x);
    print_array_data(x);
 
    return 0;
}
