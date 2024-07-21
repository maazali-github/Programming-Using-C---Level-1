#include <iostream>
#include <string>
using namespace std;

int main()
{   
    // convert double to int 
    int num1;
    double num2 = 18.99;

    // num1 = num2;    // implicit conversion from double to int 

    // num1 = (int)num2;   // explicit conversion => C style

    num1 = int(num2);    // explicit conversion function style

    cout << num2 << endl;
    cout << num1 << endl;
    cout << "==================\n";

    // ==============================

    // convert string to numbers

    string str = "123.759";

    int int_num = stoi(str);
    cout << "int_num = " << int_num << endl;

    
    float float_num = stof(str);
    cout << "float_num = " << float_num << endl;

    
    double double_num = stod(str);
    cout << "double_num = " << double_num << endl;

    cout << "==================\n";

    // conert numbers to string

    int num3 = 123;
    double num4 = 123.456;

    string st1, st2;

    st1 = to_string(num3);
    st2 = to_string(num4);

    cout << st1 << endl;
    cout << st2 << endl;

    return 0;
}
