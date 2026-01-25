#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Eneter first number:";
    cin >> a;
    cout << "Enter second number:";
    cin >>b;
    cout << "Enter third number:";
    cin >> c;
    if (a + b > c && b + c > a && c + a > b) {
        if (a = b = c) {
            cout << "triangle is rawnostranen";
        }
        else if (a == b || b == c || c == a) {
            cout << "triangle is rawnobedren";
        }
        else {
            cout << "triangle is raznostrannen";
        }
    }
    else {
        cout << "not a triangle";
    }
    cout << ""<<endl;
    cout << "peramiter:";
    cout<< a + b + c;
}
