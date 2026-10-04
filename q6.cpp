#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;

    cout << "Enter a, b and c: ";
    cin >> a >> b >> c;

    bool valid = (a != 0) ? true : false;

    if (!valid) {
        cout << "Invalid quadratic equation";
        return 0;
    }

    float d = b*b - 4*a*c;

    if (d > 0) {
        float r1 = (-b + sqrt(d)) / (2*a);
        float r2 = (-b - sqrt(d)) / (2*a);

        cout << "Real and distinct roots\n";
        cout << "Root 1 = " << r1 << endl;
        cout << "Root 2 = " << r2;
    }
    else if (d == 0) {
        float r = -b / (2*a);

        cout << "Real and equal roots\n";
        cout << "Root = " << r;
    }
    else {
        cout << "Imaginary roots";
    }

    return 0;
}