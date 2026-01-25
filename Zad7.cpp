#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;

    int start = a, end = b;
    if (start > end) { int t = start; start = end; end = t; }

    int sum = 0, count = 0;
    cout << "Numbers: ";
    for (int i = start; i <= end; i++) {
        if (i % 3 == 0 && i % 10 != 6) {
            cout << i << " ";
            sum += i;
            count++;
        }
    }
    cout << "\nSum: " << sum << "\nCount: " << count;
    return 0;
}
