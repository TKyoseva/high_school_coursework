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
    int count = 0;
    for (int i = start; i <= end; i++) if (i % 2 == 0) count++;
    cout << "Count of even numbers from " << start << " to " << end << ": " << count;
    return 0;
}
