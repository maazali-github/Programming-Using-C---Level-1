#include <iostream>

using namespace std;

int read_int_number_in_range(int from, int to)
{
    int number;

    do 
    {
        cout << "Please enter a number between " << from << " and " << to << ": ";
        cin >> number;
    } while (number < from || number > to);

    return number;
}

int main()
{
    int num = read_int_number_in_range(10, 20);
    cout << "\nThe number is: " << num << endl;

    return 0;
}
