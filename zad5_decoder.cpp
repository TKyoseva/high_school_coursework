#include <iostream>
using namespace std;

int main() {
    int code;
    cout << "Where am I and what day is it: ";
    cin >> code;

    int dayNum = code % 10;   // last digit
    int cityCode = code / 10; // first two digits

    if (dayNum < 1 || dayNum > 7) {
        cout << "Invalid day!" << endl;
        return 0;
    }

    cout << "You are in ";
    if (cityCode == 12) cout << "Sofia";
    else if (cityCode == 23) cout << "Varna";
    else if (cityCode == 34) cout << "Plovdiv";
    else if (cityCode == 45) cout << "Burgas";
    else if (cityCode == 56) cout << "Ruse";
    else cout << "Abroad";

    cout << " and it's ";

    if (dayNum == 1) cout << "Monday";
    else if (dayNum == 2) cout << "Tuesday";
    else if (dayNum == 3) cout << "Wednesday";
    else if (dayNum == 4) cout << "Thursday";
    else if (dayNum == 5) cout << "Friday";
    else if (dayNum == 6) cout << "Saturday";
    else if (dayNum == 7) cout << "Sunday";

    cout << "." << endl;
    return 0;
}
