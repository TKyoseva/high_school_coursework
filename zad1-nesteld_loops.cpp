#include <iostream>
#include <windows.h>
using namespace std;
HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	int h;
	int m;
	int s;
	for (int h = 0; h <= 60; h++) {
			for (int m = 0; m <= 60; m++) {
					for (int s = 0; s <= 60; s++) {
						if (h < 10 && m < 10 && s < 10) {
							cout << "0" << h << ":0" << m << ":0" << s << endl;
						}
						else if (h < 10 && m < 10) {
							cout << "0" << h << ":0" << m << ":" << s << endl;
						}
						else if (h < 10) {
							cout << "0" << h << ":" << m << ":" << s << endl;
						}
						else{
							cout << h << ":" << m << ":" << s << endl;
						}
						Sleep(1000);
						system("cls");

					}

				}
			}
		}

