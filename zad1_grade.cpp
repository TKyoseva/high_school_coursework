#include <iostream>
using namespace std;

int main() {
    char name[51];
    int points;

    cout << "Enter name: ";
    cin >> name; // one word only
    cout << "Enter points: ";
    cin >> points;

    if (points < 0 || points > 100) {
        cout << "Invalid points!" << endl;
    } else if (points <= 30) {
        cout << name << " has Poor 2." << endl;
    } else if (points <= 50) {
        cout << name << " has Average 3." << endl;
    } else if (points <= 70) {
        cout << name << " has Good 4." << endl;
    } else if (points <= 85) {
        cout << name << " has Very good 5." << endl;
    } else {
        cout << name << " has Excellent 6." << endl;
    }
    return 0;
}
