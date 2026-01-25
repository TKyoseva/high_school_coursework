#include<time.h>
#include <iostream>
using namespace std;
int main()
{
    srand(time(0));
        int numElf = rand() % 100 + 1;
    int numGuess = 0;
    int br = 0;
    while (numElf != numGuess) {
        cout << "Guess my number: ";
        cin >> numGuess;
        br++;
        if (numGuess > numElf) {
            cout << "Lower"<<endl;
        }
        if (numGuess < numElf) {
            cout << "Higher"<<endl;
        }
    }
    cout << "you wonn!!"<<endl;
    cout << "it took you " << br << " times to guess";

}
