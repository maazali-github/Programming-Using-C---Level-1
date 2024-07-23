#include <iostream>

using namespace std;

int main()
{
    int array_x[5] = {5, 10, 15, 20, 25};

    cout << array_x[0] << endl;
    cout << array_x[1] << endl;
    cout << array_x[2] << endl;
    cout << array_x[3] << endl;
    cout << array_x[4] << endl;

    cout << array_x[0] + array_x[1] << endl;

    int array_y[5];

    array_y[0] = 1;
    array_y[1] = 5;

    cout << array_y[0] + array_y[1] << endl;
    cout << array_y[3] << endl; // random number
 
    return 0;
}
