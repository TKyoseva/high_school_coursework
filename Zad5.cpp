#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    if (n <= 1) { cout << "No, it is not prime!"; return 0; }
    bool prime = true;
    for (int i = 2; i < n; i++) if (n % i == 0) prime = false;
    if (prime) cout << "Yes, it is prime!";
    else cout << "No, it is not prime!";
    return 0;
}
