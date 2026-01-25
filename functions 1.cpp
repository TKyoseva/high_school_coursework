
#include <iostream>
using namespace std;
void u(int i) {
	for (int b = 1; b <= 10; b++) {
		cout << i << "*" << b << "=" << i * b<<endl;
	}
}
int main()
{
	cout << "enter number:";
	int i;
		cin >> i;
	u(i);
}
