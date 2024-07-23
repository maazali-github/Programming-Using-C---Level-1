#include <iostream>

using namespace std;

struct stInfo
{
    string first_name;
    string last_name;
    string phone;
    int age;
};

void read_info(stInfo &person_info)
{
    cout << "Enter your first name: \n";
    cin >> person_info.first_name;

    cout << "Enter your last name: \n";
    cin >> person_info.last_name;

    cout << "Enter your phone: \n";
    cin >> person_info.phone;

    cout << "Enter your age: \n";
    cin >> person_info.age;
}

void print_info(stInfo person_info)
{
    cout << "==============\n";
    cout << "Name: " << person_info.first_name << " " << person_info.last_name << endl;
    cout << "Phone: " << person_info.phone <<endl;
    cout << "Age: " << person_info.age << endl;
    cout << "==============\n";
}

int main()
{
    stInfo person_info;
    read_info(person_info);
    print_info(person_info);

    stInfo person2_info;
    read_info(person2_info);
    print_info(person2_info);

    return 0;
}
