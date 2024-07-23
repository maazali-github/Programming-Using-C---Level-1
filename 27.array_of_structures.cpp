#include <iostream>

using namespace std;

struct stInfo
{
    string first_name;
    string last_name;
    int age;
    string phone;
};

int main()
{
    stInfo person[2];

    person[0].first_name = "Mohamed";
    person[0].last_name = "Badwy";
    person[0].age = 23;
    person[0].phone = "01553414588";

    person[1].first_name = "Elsaid";
    person[1].last_name = "Badwy";
    person[1].age = 29;
    person[1].phone = "01063090820";

    cout << person[1].first_name << endl;

    return 0;
}
