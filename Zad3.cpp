#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter count of numbers: ";
    cin >> n;
    cout << "Enter numbers: ";
    int num;
    cin >> num;
    int min = num, max = num;
    for (int i = 1; i < n; i++) {
        cin >> num;
        if (num < min) min = num;
        if (num > max) max = num;
    }
    cout << "Max: " << max << "\nMin: " << min;
    return 0;
}
