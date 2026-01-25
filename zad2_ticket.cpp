#include <iostream>
using namespace std;

int main() {
    int age, dayNum;
    cout << "Enter age: ";
    cin >> age;
    cout << "Enter day number (1=Mon ... 7=Sun): ";
    cin >> dayNum;

    if (age < 0 || dayNum < 1 || dayNum > 7) {
        cout << "Invalid data!" << endl;
        return 0;
    }

    bool weekend = (dayNum == 6 || dayNum == 7);
    int price = 0;

    if (!weekend) {
        if (age < 7) price = 0;
        else if (age <= 17) price = 5;
        else if (age <= 64) price = 10;
        else price = 6;
    } else {
        if (age < 7) price = 0;
        else if (age <= 17) price = 8;
        else if (age <= 64) price = 15;
        else price = 10;
    }

    cout << "Price: " << price << "$" << endl;
    return 0;
}
