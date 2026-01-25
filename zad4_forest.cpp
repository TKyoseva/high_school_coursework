#include <iostream>
using namespace std;

int main() {
    char c1, c2, c3; // choices

    cout << "Choose [l]eft, [r]ight, [f]orward or other: ";
    cin >> c1;

    if (c1 == 'l' || c1 == 'L') {
        cout << "You've been walking and got to a river." << endl;
        cout << "Choose [s]wim or [b]ridge: ";
        cin >> c2;

        if (c2 == 's' || c2 == 'S') {
            cout << "There is a crocodile. You lose." << endl;
        } else if (c2 == 'b' || c2 == 'B') {
            cout << "You crossed the bridge succesfully! Now you see an air balloon." << endl;
            cout << "Choose [f]ly or [i]gnore: ";
            cin >> c3;

            if (c3 == 'f' || c3 == 'F') {
                cout << "CONGRATULATIONS. YOU ESCAPED!!!" << endl;
            } else if (c3 == 'i' || c3 == 'I') {
                cout << "You get lost in the forest. You lose." << endl;
            } else {
                cout << "You get lost. You lose." << endl;
            }
        } else {
            cout << "You get lost. You lose." << endl;
        }
    } else if (c1 == 'r' || c1 == 'R') {
        cout << "You find a cave. Choose [e]nter or [i]gnore: ";
        cin >> c2;

        if (c2 == 'e' || c2 == 'E') {
            cout << "There is a wizard. Choose [a]sk or [i]gnore: ";
            cin >> c3;

            if (c3 == 'a' || c3 == 'A') {
                cout << "Wizard helps you back to the town with a bag of coins. You WIN!" << endl;
            } else if (c3 == 'i' || c3 == 'I') {
                cout << "A dangerous bear deeper inside. You lose." << endl;
            } else {
                cout << "You hesitate and lose. You lose." << endl;
            }
        } else if (c2 == 'i' || c2 == 'I') {
            cout << "You walk forward and reach an old house. Choose [e]nter or [i]gnore: ";
            cin >> c3;

            if (c3 == 'e' || c3 == 'E') {
                cout << "Baba Yaga is inside. You lose." << endl;
            } else if (c3 == 'i' || c3 == 'I') {
                cout << "You reach a path. Choose [c]ontinue or [i]gnore: ";
                cin >> c3;

                if (c3 == 'c' || c3 == 'C') {
                    cout << "You find a road to a village. You WIN!" << endl;
                } else if (c3 == 'i' || c3 == 'I') {
                    cout << "You get lost. You lose." << endl;
                } else {
                    cout << "You get lost. You lose." << endl;
                }
            } else {
                cout << "You get lost. You lose." << endl;
            }
        } else {
            cout << "You get lost. You lose." << endl;
        }
    } else if (c1 == 'f' || c1 == 'F') {
        cout << "A fairy asks you a riddle." << endl;
        cout << "Riddle: What has to be broken before you can use it?" << endl;
        cout << "Your answer (type 'egg' or something else): ";
        char a1, a2, a3, a4;
        cin >> a1 >> a2 >> a3;
        if ((a1 == 'e' || a1 == 'E') && (a2 == 'g' || a2 == 'G') && (a3 == 'g' || a3 == 'G')) {
            cout << "You are right! You WIN!" << endl;
        } else {
            cout << "Wrong. You get lost in the forest. You lose." << endl;
        }
    } else {
        cout << "You get lost in the forest. You lose." << endl;
    }
    return 0;
}
