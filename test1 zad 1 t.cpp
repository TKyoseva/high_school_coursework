
#include <iostream>
using namespace std;
int main()
{
	cout << "Enter name:";
	string name;
	cin >> name;
	cout << ""<<endl;
	cout << "Enter kg peppers:";
	int A;
	cin >> A;
	if (A < 0) {
		cout << "no such kilograms";
	}
	else if (A < 30 && A>-1) {
		cout << name;
		cout << " has to pay ";
		cout << A * 5;
		cout<<" lv";
	}
	else {
		cout << name;
		cout << " has to pay ";
		cout << A * 3;
		cout<<" lv";
	}
}

