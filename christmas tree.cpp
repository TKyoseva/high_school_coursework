#include<windows.h>
#include <iostream>
using namespace std;
int main()
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    int rows;
    cout << "enter number: ";
    cin >> rows;
    //star
    for (int i = 0; i < rows - 1; i++) {
        cout << ' ';
    }
    SetConsoleTextAttribute(console, 6);
    cout << '*' << endl;
    SetConsoleTextAttribute(console, 15);
    //tree
    for (int r = 0; r < rows; r++) {
        //spaces
        for (int s = 0; s < rows - 1 - r; s++) {
            cout << ' ';
        }
        //symbols
        SetConsoleTextAttribute(console, 34);
        for (int s= 0; s < r * 2 + 1; s++) {
            cout << '#';
        }
        SetConsoleTextAttribute(console, 15);
        cout << endl;
    }
    //stump
    for (int r = 0; r < 3; r++) {
       
        for (int i = 0; i < rows - 2; i++) {
            cout << ' ';
        }
        SetConsoleTextAttribute(console, 102);
        cout << "+++"<<endl;
        SetConsoleTextAttribute(console, 15);
        
    }
}



