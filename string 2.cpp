#include<string>
#include <iostream>
using namespace std;
int main()
{
	string text;
	cout << "Enter word:";
	cin >> text;
	int sbor = 0;
	for (size_t i = 0; i < text.size(); i++) {

		if (text[i] =='a') {
			sbor += 1;
		}
		if (text[i] =='e') {
			sbor += 2;
		}
		if (text[i] =='i') {
			sbor += 3;
		}
		if (text[i] =='o') {
			sbor += 4;
		}
		if (text[i] =='u') {
			sbor += 5;
		}
	}
	cout << "sum of vouls is :" << sbor;
}
