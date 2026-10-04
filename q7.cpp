#include <iostream>
using namespace std;

int main() {
    int day, month, year;

    cout << "Enter date (DD MM YYYY): ";
    cin >> day >> month >> year;

    bool leap = false;

    if ((year % 400 == 0) ||
        (year % 4 == 0 && year % 100 != 0))
        leap = true;

    int maxDays;

    if (month == 2)
        maxDays = leap ? 29 : 28;
    else if (month == 4 || month == 6 ||
             month == 9 || month == 11)
        maxDays = 30;
    else
        maxDays = 31;

    if (month < 1 || month > 12 ||
        day < 1 || day > maxDays) {
        cout << "Invalid Date";
        return 0;
    }

    cout << "Valid Date\n";

    // Zeller's formula
    int d = day;
    int m = month;
    int y = year;

    if (m < 3) {
        m += 12;
        y--;
    }

    int k = y % 100;
    int j = y / 100;

    int h = (d + (13*(m+1))/5 + k + k/4 + j/4 + 5*j) % 7;

    switch (h) {
        case 0: cout << "Saturday"; break;
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
    }

    return 0;
}