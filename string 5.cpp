#include<string>
#include <iostream>
using namespace std;
int main()
{
	int c = 100;
	string h;
	cout << "Enter: ";
	cin >> h;
	for (size_t i = 0; i < h.size(); i++) {
		if (h[i] >= '0' && h[i] <= '9') {
			if (h[i - 1] >= 'A' && h[i - 1] <= 'Z') {
				c /=h[i-1]-'A'+1;
			}
			else if (h[i - 1] >= 'a' && h[i -1] <= 'z') {
				c *=h[i - 1] - 'a' + 1;
			}
			if (h[i + 1] >= 'A' && h[i + 1] <= 'Z') {
				c -= h[i+1] - 'A' + 1;
			}
			else if (h[i + 1] >= 'a' && h[i + 1] <= 'z') {
				c +=h[i + 1] - 'a' + 1;
			}
		}
	}
	cout << c;
}
