#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

void clearScreen() {
    system("cls");
}

void addMoney(int& balance, int money) {
    balance = balance + money;
}

int sendMoney(int& balance, int money) {
    if (money <= balance) {
        balance = balance - money;
        return 1; // success
    }
    else {
        return 0; // fail
    }
}

void printBalance(int balance) {
    cout << "Current balance: " << balance << " lv." << endl;
}

void reset(int& balance) {
    balance = 0;
}

void addToHistory(string& history, string action) {
    history = history + action + "\n";
}

string getBirthDate(string egn) {
    string year = egn.substr(0, 2);
    string month = egn.substr(2, 2);
    string day = egn.substr(4, 2);
    return day + "." + month + "." + year;
}

char getGender(string egn) {
    int digit = egn[8] - '0';
    if (digit % 2 == 0) {
        return 'm';
    }
    else {
        return 'f';
    }
}

int getAge(string egn) {
    int year = (egn[0] - '0') * 10 + (egn[1] - '0');
    return 2026 - (1900 + year);
}

string typeAccount(int age) {
    if (age <= 18) {
        return "kids account";
    }
    else if (age <= 26) {
        return "youth account";
    }
    else if (age <= 67) {
        return "adult account";
    }
    else {
        return "pension account";
    }
}

void printInfo(string name, string egn) {
    int age = getAge(egn);

    cout << "Name: " << name << endl;
    cout << "Birth date: " << getBirthDate(egn) << endl;

    if (getGender(egn) == 'm') {
        cout << "Gender: male" << endl;
    }
    else {
        cout << "Gender: female" << endl;
    }

    cout << "Account type: " << typeAccount(age) << endl;
}

int main() {
    string name;
    string egn;
    int balance;
    int choice;
    string history = "";

    cout << "Enter full name: ";
    getline(cin, name);

    cout << "Enter EGN: ";
    cin >> egn;

    cout << "Enter starting balance: ";
    cin >> balance;

    do {
        clearScreen();

        cout << "~MENU~" << endl;
        cout << "0. End program" << endl;
        cout << "1. Add to balance" << endl;
        cout << "2. Send money" << endl;
        cout << "3. Check balance" << endl;
        cout << "4. Reset account" << endl;
        cout << "5. History of transactions" << endl;
        cout << "6. Check info" << endl;
        cout << "Choice: ";
        cin >> choice;

        if (choice == 1) {
            int money;
            cout << "Enter money to add: ";
            cin >> money;

            addMoney(balance, money);
            addToHistory(history, "Added money");
        }
        else if (choice == 2) {
            int money;
            cout << "Enter money to send: ";
            cin >> money;

            if (sendMoney(balance, money) == 1) {
                addToHistory(history, "Sent money");
            }
            else {
                cout << "Not enough balance!" << endl;
            }
        }
        else if (choice == 3) {
            printBalance(balance);
        }
        else if (choice == 4) {
            reset(balance);
            addToHistory(history, "Reset account");
        }
        else if (choice == 5) {
            cout << history;
        }
        else if (choice == 6) {
            printInfo(name, egn);
        }

        if (choice != 0) {
            cout << endl << "Press Enter to continue...";
            cin.ignore();
            cin.get();
        }

    } while (choice != 0);

    return 0;
}
