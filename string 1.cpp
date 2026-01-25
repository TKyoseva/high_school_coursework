#include<string>
#include <iostream>
using namespace std;
int main()
{
	string text;
	cout << "Enter test:";
	getline(cin, text);
	for (size_t i =0 ; i < text.size(); i++) {
		cout << text[i]<<endl;
	}
}
