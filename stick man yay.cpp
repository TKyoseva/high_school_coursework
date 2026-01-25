#include <iostream>
using namespace std;

int main()
{
    string txt;
    cout << "Enter your full name: ";
    cin >> txt;

    int age;
    cout << "Enter your age: ";
    cin >> age;

    string town;
    cout << "In which town do you live: ";
    cin >> town;

    string information;
    cout << "Email for contact: ";
    cin >> information;

    string useless;
    cout << "Favourite colour: ";
    cin >> useless;



    cout << "--------------------------------------------------------" << endl;
    cout << "     O";
    cout << "    Name: " << txt;
    cout << " ,Age: " << age;
    cout << " ,Town: " << town << endl;
    cout << "    /|\\";
    cout << "   Email:" << information << endl;
    cout << "    / \\";
    cout << "   colour:" << useless << endl;
    cout << "--------------------------------------------------------" << endl;
    return 0;
}
