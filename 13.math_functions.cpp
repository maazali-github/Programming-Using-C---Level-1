#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Square Root

    float number = 64;

    cout << "=====================\n";
    cout << "Square root of 64: " << sqrt(number) << endl;
    cout << "Square root of 50: " << sqrt(50) << endl;
    cout << "=====================\n";

    // Round

    cout << "Round of 2.4: " << round(2.4) << endl;
    cout << "Round of 2.5: " << round(2.4) << endl;
    cout << "Round of 2.7: " << round(2.4) << endl;
    cout << "Square root of 50: " << sqrt(50) << endl;
    cout << "Round of square root of 50: " << round(sqrt(50)) << endl;
    cout << "=====================\n";

    // Power

    short int x = 2;
    short y = 4;

    cout << "x^y: (2^4) = " << pow(x, y) << endl;
    cout << "x^y: (4^3) = " << pow(4, 3) << endl;
    cout << "=====================\n";

    // ceil & floor

    cout << "Ceiling of 2.9: " << ceil(2.9) <<endl;
    cout << "Flooring of 2.9: " << floor(2.9) <<endl;
    cout << "Ceiling of -2.9: " << ceil(-2.9) <<endl;
    cout << "Flooring of -2.9: " << floor(-2.9) <<endl;
    cout << "=====================\n";

    // Absolute 

    cout << "Absolute value of -10: " << abs(-10) << endl;
    cout << "Absolute value of 10: " << abs(10) << endl;
    cout << "=====================\n";

    return 0;
}
