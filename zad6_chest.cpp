#include <iostream>
using namespace std;

int main() {
    int code;
    cout << "Enter code: ";
    cin >> code;

    if (code < 1000 || code > 9999) {
        cout << "Error!" << endl;
        cout << "The number is not four-digit." << endl;
        return 0;
    }

    int d1 = (code / 1000) % 10; // 1st
    int d2 = (code / 100) % 10;  // 2nd
    int d3 = (code / 10) % 10;   // 3rd
    int d4 = code % 10;          // 4th

    int hasError = 0;

    if (code >= 5000) hasError = 1;
    if (d1 % 2 != 0) hasError = 1;
    if (d2 % 3 != 0) hasError = 1;
    if (d3 + d4 != 7) hasError = 1;

    if (hasError == 0) {
        cout << "You opened the chest! You get a golden ticket for a world tour!" << endl;
    } else {
        cout << "Error!" << endl;
        if (code >= 5000) cout << "The number is more than 5000." << endl;
        if (d1 % 2 != 0) cout << "The first digit is not even." << endl;
        if (d2 % 3 != 0) cout << "The second digit does not divide by 3." << endl;
        if (d3 + d4 != 7) cout << "The sum of the last two digits is not 7." << endl;
    }
    return 0;
}
