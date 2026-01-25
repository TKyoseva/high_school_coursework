#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    while (n < 0) {
        cout << "Enter number: ";
        cin >> n;
    }

    cout << "Power of 2: ";
    int p = 1;
    for (int i = 0; i <= n; i++) {
        if (i > 0) cout << " ";
        cout << "2^" << i << "=" << p;
        p = p * 2;
    }
    cout << "\n";

    cout << "Even: ";
    int first = 1;
    for (int i = 0; i <= n; i++) {
        if (i % 2 == 0) {
            if (!first) cout << " ";
            cout << i;
            first = 0;
        }
    }
    cout << "\n";

    cout << "Odd: ";
    first = 1;
    for (int i = 0; i <= n; i++) {
        if (i % 2 != 0) {
            if (!first) cout << " ";
            cout << i;
            first = 0;
        }
    }
    cout << "\n";

    int fact = 1;
    for (int i = 2; i <= n; i++) {
        fact = fact * i;
    }
    cout << n << "! = " << fact << "\n";
    return 0;
}
