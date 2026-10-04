#include <iostream>
using namespace std;

int main() {
    float marks, total = 0;
    int fail = 0;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter marks in subject " << i << ": ";
        cin >> marks;

        total += marks;

        if (marks < 40)
            fail++;
    }

    float percentage = total / 5;

    if (fail > 1) {
        cout << "Repeat Year";
    }
    else {
        if (percentage >= 90)
            cout << "Grade A";
        else if (percentage >= 80)
            cout << "Grade B";
        else if (percentage >= 70)
            cout << "Grade C";
        else if (percentage >= 60)
            cout << "Grade D";
        else
            cout << "Grade F";
    }

    return 0;
}