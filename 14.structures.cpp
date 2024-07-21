#include <iostream>
using namespace std;

struct stOwner
{
    string full_name;
    string phone;
};

struct Car
{
    string brand;
    string model;
    int year;
    stOwner owner;      // structure into structure
};

int main()
{
    Car mycar1, mycar2;
    mycar1.brand = "BWM";
    mycar1.model = "X5";
    mycar1.year = 2000;
    mycar1.owner.full_name = "Mohamed Badwy";
    mycar1.owner.phone = "01553414588";

    mycar2.brand = "Ford";
    mycar2.model = "Mustang";
    mycar2.year = 2022;
    mycar2.owner.full_name = "Elsaid Badwy";
    mycar2.owner.phone = "01063090820";

    cout << mycar1.brand << " " << mycar1.model << " " << mycar1.year << " " << mycar1.owner.full_name << " " << mycar1.owner.phone << endl;
    cout << mycar2.brand << " " << mycar2.model << " " << mycar2.year << " " << mycar2.owner.full_name << " " << mycar2.owner.phone << endl;

    return 0;
}
