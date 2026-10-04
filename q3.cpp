#include <iostream>
using namespace std;

int main() {
    int a, b;
    char op;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Enter operator (+, -, *, /, %): ";
    cin >> op;

    if ((op == '/' || op == '%') && b == 0) {
        cout << "Division by zero is not allowed";
        return 0;
    }

    int result;

    result = (op == '+') ? a + b :
             (op == '-') ? a - b :
             (op == '*') ? a * b :
             (op == '/') ? a / b :
             (op == '%') ? a % b : 0;

    if (op == '+' || op == '-' || op == '*' || op == '/' || op == '%')
        cout << "Result = " << result;
    else
        cout << "Invalid operator";

    return 0;
}