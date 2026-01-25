#include<string>
#include <iostream>
using namespace std;
int main()
{
	string word;
	cout << "enter word:";
	cin >> word;
	for (size_t i=0; i<word.size()/2; i++){
		swap(word[i], word[word.size() - i - 1]);
	}
	cout << word;
}
