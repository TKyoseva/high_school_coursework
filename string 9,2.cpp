#include <iostream>
#include <string>
using namespace std;

int main() {
    string email;
    getline(cin, email);

    int before = 0;
    int after = 0;
    int atPos = email.find('@');

    for (int i = 0; i < atPos; i++) {
        before++;
    }

    for (int i = atPos + 1; i < email.size(); i++) {
        after++;
    }

    if (before - after >= 0) {
        cout << "Call her!";
    } else {
        cout << "She is not the one.";
    }

    return 0;
}
