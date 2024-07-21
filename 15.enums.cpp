#include <iostream>
using namespace std;

enum Week {sat, sun, mon, tue, wed, thu, fri};
enum Color {black = 0, white = 255};

int main()
{
    Week today;
    Color mycolor;

    today = Week::fri;
    mycolor = Color::white;

    cout << "My color: " << mycolor << endl;
    cout << "Today: " << today << endl;

    return 0;
}
