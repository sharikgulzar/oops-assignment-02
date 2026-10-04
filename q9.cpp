#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int original = num;
    int reverse = 0;

    while (num > 0) {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }

    if (original == reverse)
        cout << "Palindrome\n";
    else
        cout << "Not Palindrome\n";

    int start, end;

    cout << "Enter range: ";
    cin >> start >> end;

    cout << "Palindrome numbers are:\n";

    for (int i = start; i <= end; i++) {
        int n = i;
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        if (i == rev)
            cout << i << " ";
    }

    return 0;
}