#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    int sum = 0;
    int product = 1;

    while (num > 0) {
        int digit = num % 10;

        sum += digit;
        product *= digit;

        num = num / 10;
    }

    cout << "Sum of digits = " << sum << endl;
    cout << "Product of digits = " << product;

    return 0;
}