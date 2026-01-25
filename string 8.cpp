#include <iostream>
#include <string>
using namespace std;

int main() {
    string text, command;
    getline(cin, text);
    getline(cin, command);

    if (command.find("Append ") == 0) {
        string add = command.substr(7);
        text = text + add;
    }
    else if (command.find("Remove ") == 0) {
        int pos = stoi(command.substr(7));
        int count = stoi(command.substr(command.find(' ', 7) + 1));
        text.erase(pos, count);
    }
    else if (command.find("Insert ") == 0) {
        int pos = stoi(command.substr(7));
        string add = command.substr(command.find(' ', 7) + 1);
        text.insert(pos, add);
    }
    else if (command.find("Replace ") == 0) {
        int firstSpace = command.find(' ', 8);
        string oldStr = command.substr(8, firstSpace - 8);
        string newStr = command.substr(firstSpace + 1);

        int index = text.find(oldStr);
        if (index != string::npos) {
            text.replace(index, oldStr.size(), newStr);
        }
    }

    cout << text;
    return 0;
}
