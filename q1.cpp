#include <iostream>
using namespace std;

int main() {
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    float mag1 = r1*r1 + i1*i1;
    float mag2 = r2*r2 + i2*i2;

    if (mag1 > mag2)
        cout << "First complex number has higher magnitude";
    else if (mag2 > mag1)
        cout << "Second complex number has higher magnitude";
    else
        cout << "Equal";

    return 0;
}