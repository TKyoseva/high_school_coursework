
#include <iostream>
using namespace std;
void hi(string n) {
	cout << "Hello, " << n << endl;
}
void f(int& a, int b) {
	a += 1;
		b += 1;
		cout << "a in fu: " << a << endl;
		cout << "b in fu: " << b << endl;

}
int main()
{
	hi("world");
	cout << "Enter: ";
	string n;
	cin >> n;
	hi(n);
	int a = 5, b = 17;
	cout << "a in main before fu: " << a << endl;
	cout << "b in main before fu: " << b << endl;
	f(a, b);
	cout << "a in main after fu: " << a << endl;
	cout << "b in main after fu: " << b << endl;


}
