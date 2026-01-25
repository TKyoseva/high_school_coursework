#include <iostream>
using namespace std;

int main() {
    cout << "===== MINI QUIZ SHOW =====" << endl;
    cout << "* Intro * Lights on, music plays!" << endl << endl;

    int money = 0;
    char ans;

    cout << "Q1) What is the capital of Bulgaria?" << endl;
    cout << "  a) Varna  b) Sofia  c) Plovdiv  d) Ruse" << endl;
    cout << "Your answer (a/b/c/d): ";
    cin >> ans;
    if (ans == 'b' || ans == 'B') { money = money + 100; cout << "Correct! +100" << endl << endl; }
    else { cout << "Wrong! No prize." << endl << endl; }

    cout << "Q2) 5 * 6 = ?" << endl;
    cout << "  a) 11  b) 30  c) 56  d) 26" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans == 'b' || ans == 'B') { money = money + 200; cout << "Correct! +200" << endl << endl; }
    else { cout << "Wrong! No prize." << endl << endl; }

    cout << "Q3) Which is NOT a programming language?" << endl;
    cout << "  a) Python  b) Java  c) HTML  d) C++" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans == 'c' || ans == 'C') { money = money + 300; cout << "Correct! +300" << endl << endl; }
    else { cout << "Wrong! No prize." << endl << endl; }

    cout << "Q4) Which planet is known as the Red Planet?" << endl;
    cout << "  a) Mars  b) Venus  c) Jupiter  d) Mercury" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans == 'a' || ans == 'A') { money = money + 400; cout << "Correct! +400" << endl << endl; }
    else { cout << "Wrong! No prize." << endl << endl; }

    cout << "Q5) 2^3 equals?" << endl;
    cout << "  a) 6  b) 7  c) 8  d) 9" << endl;
    cout << "Your answer: ";
    cin >> ans;
    if (ans == 'c' || ans == 'C') { money = money + 500; cout << "Correct! +500" << endl << endl; }
    else { cout << "Wrong! No prize." << endl << endl; }

    cout << "* Outro * Confetti falls!" << endl;
    cout << "Total won: " << money << " leva." << endl;
    return 0;
}
