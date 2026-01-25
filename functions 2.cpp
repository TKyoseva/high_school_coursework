
#include <iostream>
using namespace std;
void s(int n,char h) {
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cout << h;
		}
		cout << endl;
	}
	

}
int main()
{
	int n;
	cout << "Enter number:";
	cin >> n;
	char h;
	cout << "Enter symbol:";
	cin >> h;
	s(n, h);
}
