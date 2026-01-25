#include <iostream>
using namespace std;

int main() {
    double price;
    int age;
    cout << "Price of Playstation: ";
    cin >> price;
    cout << "Age: ";
    cin >> age;

    double money = 0;
    int i = 1;
    while (i <= age) {
        money = money + i * 10;
        if (i % 2 == 0) {
            money = money - 1;
        }
        i = i + 1;
    }

    if (money >= price) {
        double left = money - price;
        cout << "You have enough money.\n";
        cout << "You will have " << left << "$ left after buying it.\n";
    } else {
        cout << "You don't have enough money.\n";
        int n;
        cout << "Number of grades: ";
        cin >> n;
        cout << "Grades: ";
        double s = 0;
        int j = 0;
        while (j < n) {
            double g;
            cin >> g;
            s = s + g;
            j = j + 1;
        }
        double avg = 0;
        if (n > 0) avg = s / n;
        if (avg >= 5.0) {
            double need = price - money;
            cout << "Parents will help you.\n";
            cout << "They need to give you " << need << "$.\n";
        } else {
            cout << "Your parents won't help you.\n";
            cout << "Sorry...\n";
        }
    }
    return 0;
}
