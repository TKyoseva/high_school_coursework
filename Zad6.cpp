#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    int d1 = n/1000, d2 = (n/100)%10, d3 = (n/10)%10, d4 = n%10;
    if (d1==d4 && d2==d3) cout << "Yes";
    else cout << "No";
    return 0;
}
