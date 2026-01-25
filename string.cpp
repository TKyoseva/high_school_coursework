
#include <iostream>
#include<string>
using namespace std;
int main()
{
	string pass;
	cin>> pass;
	if (pass.size()<9) {
		cout << "needs at least 10 symbols";
	}
	int small=0;
	int big=0;
	int cif=0;
	int sym=0;
	int sbor=0;
	for (size_t i = 0; i < pass.size(); i++) {
		
		if (pass[i] >= 'a' && pass[i] <= 'z') { small++; }
		else if (pass[i] >= 'A' && pass[i] <= 'Z') { big++; }
		else if (pass[i] >= '0' && pass[i] <= '9') {
			cif++;
		sbor += pass[i]-'0'; }
		else { sym++; };

	}
	if (small < 3) { cout << "needs atleast 3 small letters" << endl; }
	if (big < 1) { cout << "needs atleast 1 big letter" << endl; }
	if (cif < 3) { cout << "needs atleast 3 numbers" << endl; }
	if (small < 3) { cout << "needs atleast 3 small letters" << endl; }
	if (sbor < 11) { cout << "numbers need to add up to atleast 11" << endl; }
	if (sym < 2) { cout << "needs atleast 2 symbols" << endl; }
	else { cout << "Yayyyyy goood passswordddd"; }
	
}

