#include <iostream>
#include <string>
using namespace std;

int licePravoagalnik(int a, int b) {
    return a * b;
}

int obikolkaPravoagalnik(int a, int b) {
    return 2 * a + 2 * b;
}

int liceKrag(int r) {
    return 3.14 * r * r;   // using 3.14 but function returns int
}

int obikolkaKrag(int r) {
    return 2 * 3.14 * r;   // using 3.14 but function returns int
}

int obikolkaTriagalnik(int a, int b, int c) {
    return a + b + c;
}

string vidTriagalnik(int a, int b, int c) {
    if (a == b && b == c) {
        return "ravnostranen";
    }
    else if (a == b || b == c || a == c) {
        return "ravnobedren";
    }
    else {
        return "raznostranen";
    }
}

char toLowerChar(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + 32;
    }
    return c;
}

string toLowerString(string s) {
    for (int i = 0; i < s.length(); i++) {
        s[i] = toLowerChar(s[i]);
    }
    return s;
}

int main() {
    string shape;
    cout << "Enter shape: ";
    cin >> shape;

    shape = toLowerString(shape);

    if (shape == "rectangle") {
        int a, b;
        cout << "Enter 2 sides: ";
        cin >> a >> b;

        cout << "Area: " << licePravoagalnik(a, b) << endl;
        cout << "Perimeter: " << obikolkaPravoagalnik(a, b) << endl;
    }
    else if (shape == "circle") {
        int r;
        cout << "Enter radius: ";
        cin >> r;

        cout << "Area: " << liceKrag(r) << endl;
        cout << "Perimeter: " << obikolkaKrag(r) << endl;
    }
    else if (shape == "triangle") {
        int a, b, c;
        cout << "Enter 3 sides: ";
        cin >> a >> b >> c;

        cout << "Parameter: " << obikolkaTriagalnik(a, b, c) << endl;
        cout << "Type: " << vidTriagalnik(a, b, c) << endl;
    }

    return 0;
}
