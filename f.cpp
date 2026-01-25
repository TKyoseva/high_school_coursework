#include <string>
#include <iostream>
using namespace std;


int dumi(string t) {
	int dum=0;
	for (int i = 0; i < t.size(); i++) {
		if (t[i] ==' ') {
			dum++;
		}
	}
	return dum+1;
}
int bukwi(string t) {
	int buk = 0;
	for (int i = 0; i < t.size(); i++) {
		if (t[i] != ' ') {
			buk++;
		}
	}
	return buk;
}
int glasni(string t) {
	int gl = 0;
		for (int i = 0; i < t.size(); i++) {
			if (t[i] == 'a' || t[i] == 'e' || t[i] == 'y' || t[i] == 'u' || t[i] == 'i' || t[i] == 'o' || t[i] == 'A' || t[i] == 'E' || t[i] == 'Y' || t[i] == 'U' || t[i] == 'I' || t[i] == 'O') {
				gl++;
			}
		}
		return gl;
}
int syglasni(string t) {
	int sy = 0;
	for (int i = 0; i < t.size(); i++) {
		if (t[i] != 'a' && t[i] != 'e' && t[i] != 'y' && t[i] != 'u' && t[i] != 'i' && t[i] != 'o' && t[i] != 'A' && t[i] != 'E' && t[i] != 'Y' && t[i] != 'U' && t[i] != 'I' && t[i] != 'O') {
			sy++;
		}
	}
	return sy;
}
int main()
{
	string t;
	cout << "enter sentance: ";
	getline(cin, t);
	cout<<"beoj dumi: " << dumi(t) << endl;
	cout <<"broj bukwi: " << bukwi(t) << endl;
	cout << "broj glasni: " << glasni(t) << endl;
	cout << "broj syglasni: " << syglasni(t) << endl;
}
