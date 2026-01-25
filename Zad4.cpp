#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cout << i << " -> ";
        for (int d = 1; d <= i; d++) if (i % d == 0) cout << d << " ";
        cout << "\n";
    }
    return 0;
}
