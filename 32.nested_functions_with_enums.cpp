#include <iostream>

using namespace std;

enum enWeekday {sun = 1, mon = 2, tue = 3, wed = 4, thu = 5, fri = 6, sat = 7}; 

void show_weekday_menu()
{
    cout << "=========\n";
    cout << "1. Sunday\n";
    cout << "2. Monday\n";
    cout << "3. Tuesday\n";
    cout << "4. Wednesday\n";
    cout << "5. Thursday\n";
    cout << "6. Friday\n";
    cout << "7. Saturday\n";
    cout << "=========\n";
}

enWeekday read_weekday()
{
    enWeekday weekday;

    int x;
    cout << "Enter Weekday Number: ";
    cin >> x;

    weekday = (enWeekday)x;
    return weekday;
}

void get_week_day_name(enWeekday weekday)
{
    switch (weekday)
    {
        case enWeekday::sun:
            cout << "Sunday";
            break;
        case enWeekday::mon:
            cout << "Monday";
            break;
        case enWeekday::tue:
            cout << "Tuesday";
            break;
        case enWeekday::wed:
            cout << "Wednesday";
            break;
        case enWeekday::thu:
            cout << "Thursday";
            break;
        case enWeekday::fri:
            cout << "Friday";
            break;
        case enWeekday::sat:
            cout << "Saturday";
            break;
        default:
            cout << "Wrong Day";
    }

    cout << endl;
}

int main()
{
    show_weekday_menu();
    get_week_day_name(read_weekday());

    return 0;
}
