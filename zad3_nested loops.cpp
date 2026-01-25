#include <iostream>
using namespace std;
int main()
{
	int floors;
	int rooms;
	cout << "Enter floors:";
	cin >> floors;
	cout << "Enter rooms on one floor:";
	cin >> rooms;
	

	for (int f = floors; f >= 1; --f) {
		char t;
		if (f == floors) {
			t = 'L';
		}
		else if (f % 2 == 0) {
			t = 'O';
		}
		else {
			t = 'A';
		}
		for ( int r = 0; r < rooms; ++r) {
			cout << t << f << r << " ";
		}
		cout << endl;
	}
}
