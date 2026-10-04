#include <iostream>
using namespace std;

int main() {
    int year;

    cout << "Enter year: ";
    cin >> year;

    bool leap = false;

    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0)
                leap = true;
        }
        else
            leap = true;
    }

    if (leap) {
        cout << year << " is a leap year";
    }
    else {
        cout << year << " is not a leap year\n";
        cout << "Next 5 leap years are:\n";

        int count = 0;
        year++;

        while (count < 5) {
            if ((year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0)) {
                cout << year << endl;
                count++;
            }
            year++;
        }
    }

    return 0;
}