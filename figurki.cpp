#include <iostream>
#include <windows.h>
using namespace std;
int main()
{
    
        cout << "~MENU~" << endl;
        cout << "0.End program" << endl;
        cout << "1.Square" << endl;
        cout << "2.Square frame" << endl;
        cout << "3.Rectangle" << endl;
        cout << "4.Rectangle frame" << endl;
        cout << "5.Triangle down left" << endl;
        cout << "6.Triangle up right" << endl;
        cout << "7.Triangle up left" << endl;
        cout << "8.Triangle down right" << endl;
        cout << "9.Main diagonal" << endl;
        cout << "10.Secondary diagonal" << endl;
        cout << "11.X-shape" << endl;
        cout << "12.X-shape inverted" << endl;
        cout << "13.Cross" << endl;
        cout << "14.Cross inverted(Windows logo)" << endl;
        cout << "15.Pink windows logo" << endl;
        cout << "" << endl;
        cout << "Choose an option:" << endl;
        int o;
        cin >> o;
        system("cls");
        while(o!=0){
        if (o == 0) {
            return 0;
        }
        else if (o == 1) {
            cout << "~Square~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int a = 1; a <= size; a++) {
                for (int b = 1; b <= size; b++) {
                    cout << " " << symbol;
                }
                cout << endl;
            }

        }
        else if (o == 2) {
            cout << "~Square frame~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == 1 || i == size || j == 1 || j == size) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (o == 3) {
            cout << "~Rectangle~" << endl;
            cout << "Enter 2 sizes and a symbol:" << endl;
            int size1, size2;
            char symbol;
            cin >> size1;
            cin >> size2;
            cin >> symbol;
            for (int i = 0; i < size1; i++) {
                for (int j = 0; j < size2; j++) {
                    cout << " " << symbol;
                }
                cout << endl;
            }

        }
        else if (o == 4) {
            cout << "~Rectangle frame~" << endl;
            cout << "Enter 2 sizes and a symbol:" << endl;
            int size1, size2;
            char symbol;
            cin >> size1;
            cin >> size2;
            cin >> symbol;
            for (int i = 1; i <= size1; i++) {
                for (int j = 1; j <= size2; j++) {
                    if (i == 1 || i == size1 || j == 1 || j == size2) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (o == 5) {
            cout << "~Triangle down left~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 0; i < size; i++) {
                for (int j = 0; j <= i; j++) {
                    cout << " " << symbol;
                }
                cout << endl;
            }
        }
        else if (o == 6) {
            cout << "~Triangle up right~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 0; i <= size; i++) {
                for (int j = size; j >= 0; j--) {
                    if (j >= size - i) {
                        cout << "  ";
                    }
                    else {
                        cout << " " << symbol;
                    }
                }
                cout << endl;
            }
        }
        else if (o == 7) {
            cout << "~Triangle up right~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = size; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << " " << symbol;
                }
                cout << endl;
            }
        }
        else if (o == 8) {
            cout << "~Triangle down right~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (j >= size - i + 1) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (o == 9) {
            //za 4 simwolite sa na :(1,4), (2,3), (3,2), (4,1)
            //1+4=5 (size+1)
            //2+3=5 (size+1)...
            cout << "~Main diagonal~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == j) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (o == 10) {
            cout << "~Secondary diagonal~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i + j == size + 1) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (o == 11) {
            cout << "~X-shape~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == j || i + j == size + 1) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }
        }
        else if (o == 12) {
            cout << "~X-shape inverted~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i != j && i + j != size + 1) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }

                }
                cout << endl;
            }
        }
        else if (o == 13) {
            cout << "~Cross~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            int mid;
            if (size % 2 == 1) {
                mid = (size / 2) + 1;
            }
            else {
                mid = size / 2;
            }
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == mid || j == mid) {
                        cout << " " << symbol;
                    }
                    else {
                        cout << "  ";
                    }
                }
                cout << endl;
            }
        }
        else if (o == 14) {
            cout << "~Cross inverted(Windows logo)~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int mid;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            if (size % 2 == 1) {
                mid = (size / 2) + 1;
            }
            else {
                mid = size / 2;
            }
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == mid && j == mid) {
                        cout << " ";
                    }
                    else {
                        if (i < mid && j < mid) {
                            SetConsoleTextAttribute(hConsole, 12); // red
                        }
                        else if (i<mid && j>mid) {
                            SetConsoleTextAttribute(hConsole, 10); // green
                        }
                        else if (i > mid && j < mid) {
                            SetConsoleTextAttribute(hConsole, 9);  // blue
                        }
                        else if (i > mid && j > mid) {
                            SetConsoleTextAttribute(hConsole, 14); // yellow
                        }
                        else {
                            SetConsoleTextAttribute(hConsole, 0);
                        }
                        cout << " " << symbol;
                    }
                }
                cout << endl;
            }

        }
        else if (o == 15) {
            cout << "~Pink windows logo~" << endl;
            cout << "Enter size and a symbol:" << endl;
            int mid;
            int size;
            char symbol;
            cin >> size;
            cin >> symbol;
            HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
            if (size % 2 == 1) {
                mid = (size / 2) + 1;
            }
            else {
                mid = size / 2;
            }
            for (int i = 1; i <= size; i++) {
                for (int j = 1; j <= size; j++) {
                    if (i == mid && j == mid) {
                        cout << " ";
                    }
                    else {
                        if (i < mid && j < mid) {
                            SetConsoleTextAttribute(hConsole, 5); // dark pink
                        }
                        else if (i<mid && j>mid) {
                            SetConsoleTextAttribute(hConsole, 13); // light pink
                        }
                        else if (i > mid && j < mid) {
                            SetConsoleTextAttribute(hConsole, 12);  // light red
                        }
                        else if (i > mid && j > mid) {
                            SetConsoleTextAttribute(hConsole, 15); // white
                        }
                        else {
                            SetConsoleTextAttribute(hConsole, 0);
                        }
                        cout << " " << symbol;
                    }
                }
                cout << endl;
            }
        }
        else {
            cout << "Invalid number";
        }
        system("pause");
        system("cls");
        cout << "~MENU~" << endl;
        cout << "0.End program" << endl;
        cout << "1.Square" << endl;
        cout << "2.Square frame" << endl;
        cout << "3.Rectangle" << endl;
        cout << "4.Rectangle frame" << endl;
        cout << "5.Triangle down left" << endl;
        cout << "6.Triangle up right" << endl;
        cout << "7.Triangle up left" << endl;
        cout << "8.Triangle down right" << endl;
        cout << "9.Main diagonal" << endl;
        cout << "10.Secondary diagonal" << endl;
        cout << "11.X-shape" << endl;
        cout << "12.X-shape inverted" << endl;
        cout << "13.Cross" << endl;
        cout << "14.Cross inverted(Windows logo)" << endl;
        cout << "15.Pink windows logo" << endl;
        cout << "" << endl;
        cout << "Choose an option:" << endl;
        cin >> o;
        system("cls");
    }
    
}