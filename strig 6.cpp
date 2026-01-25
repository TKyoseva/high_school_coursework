#include <iostream>
#include <string>
using namespace std;

int main() {
    string text;
    getline(cin, text);

    for (int i = 0; i < text.size(); i++) {
        if (text[i] >= '0' && text[i] <= '9') {
            int digit = text[i] - '0';
            char letter = 'a' + digit - 1;
            text[i] = letter;
        }
    }

    cout << text;
    return 0;
}
