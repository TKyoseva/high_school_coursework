#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    int start = a > b ? a : b;
    int nok;
    for (int i = start;; i++) {
        if (i % a == 0 && i % b == 0) { nok = i; break; }
    }
    cout << "NOK: " << nok;
    return 0;
}
