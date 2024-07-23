#include <iostream>

using namespace std;

void read_array_data(int arr[100], int &length)
{
    cout << "Please Enter the length of numbers: ";
    cin >> length;

    for (int i = 0; i < length; i++)
    {
        cout << "Enter Number " << i+1 << ": ";
        cin >> arr[i];
    }
} 

void print_array_data(int arr[100], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << "Number " << i+1 << ": " << arr[i] << endl;
    }
}

int calculate_sum(int arr[100], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += arr[i];
    }

    return sum;
}

int main()
{
    int arr[100], length;

    read_array_data(arr, length);
    print_array_data(arr, length);

    cout << "==========\n";
    int sum = calculate_sum(arr, length);

    cout << "Sum = " << sum << endl;
    cout << "Average = " << float(sum) / length << endl;
    cout << "==========\n";

    return 0;
}
