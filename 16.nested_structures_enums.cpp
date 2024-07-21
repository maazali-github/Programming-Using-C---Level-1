#include <iostream>
using namespace std;

enum enStatus {single, married};

struct stAddress
{
    string street_name;
    string build_no;
    string zipcode;
};


struct stContactInfo
{
    string phone;
    string email;
    stAddress address;
};


struct stPerson
{
    string first_name;
    string last_name;
    stContactInfo contact_info;
    enStatus status;
};

int main()
{
    stPerson person;

    person.first_name = "Mohamed";
    person.last_name = "Badwy";
    person.status = enStatus::single;
    person.contact_info.phone = "01553414588";
    person.contact_info.email = "mohamedbadwy360@gmail.com";
    person.contact_info.address.build_no = "1";
    person.contact_info.address.street_name = "Tahway";
    person.contact_info.address.zipcode = "35637";

    cout << person.first_name << " " << person.last_name << endl;
    cout << "Contact Info: " << person.contact_info.phone << endl;

    return 0;
}
