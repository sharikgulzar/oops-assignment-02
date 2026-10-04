#include <iostream>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    switch (ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            cout << "Lowercase vowel";
            break;

        case 'A': case 'E': case 'I': case 'O': case 'U':
            cout << "Uppercase vowel";
            break;

        default:
            if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
                cout << "Consonant";
            else if (ch >= '0' && ch <= '9')
                cout << "Digit";
            else
                cout << "Special character";
    }

    return 0;
}