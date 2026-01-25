
#include <iostream>
using namespace std;
int main()
{
	string word;
	cout << "Enter word: ";
	string word2 = "";
	for (size_t i = word.size() - 1; i >= 0; i--) {
		word += word[i];
	}
	if (word = word2) {
		cout << "yas";
	}
	else {
		cout << "no";
	}
}
