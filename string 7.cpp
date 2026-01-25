#include <iostream>
#include <string>
using namespace std;

int main() {
    string word, sentence;
    getline(cin, word);
    getline(cin, sentence);

    for (int i = 0; i <= sentence.size() - word.size(); i++) {
        if (sentence.substr(i, word.size()) == word) {
            for (int j = 0; j < word.size(); j++) {
                sentence[i + j] = '*';
            }
        }
    }

    cout << sentence;
    return 0;
}
