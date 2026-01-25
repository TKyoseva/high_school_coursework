#include <iostream>
using namespace std;

int main() {
    cout << "Enter numbers (end with 0): ";
    int sum = 0;
    int x;
    int minv = 0;
    int maxv = 0;
    int have = 0;
    int count = 0;
    while (true) {
        cin >> x;
        if (x == 0) break;
        sum = sum + x;
        if (have == 0) {
            minv = x;
            maxv = x;
            have = 1;
        } else {
            if (x < minv) minv = x;
            if (x > maxv) maxv = x;
        }
        count = count + 1;
    }
    if (count == 0) {
        cout << "\n";
        cout << "Sum: 0\n";
        cout << "Min: 0\n";
        cout << "Max: 0\n";
        cout << "Average: 0\n";
    } else {
        cout << "\n";
        cout << "Sum: " << sum << "\n";
        cout << "Min: " << minv << "\n";
        cout << "Max: " << maxv << "\n";
        cout << "Average: " << (sum / count) << "\n";
    }
    return 0;
}
