#include <iostream>
using namespace std;

int main() {
    int total = 0;
    int minSteps = -1;
    int maxSteps = -1;
    int minDay = 1;
    int maxDay = 1;

    for (int day = 1; day <= 7; day++) {
        cout << "~Day " << day << "~" << "\n";
        int steps;
        int daySteps = 0;

        while (true) {
            cin >> steps;
            if (steps == -1) break;
            daySteps = daySteps + steps;
        }

        total = total + daySteps;

        if (minSteps == -1 || daySteps < minSteps) {
            minSteps = daySteps;
            minDay = day;
        }
        if (maxSteps == -1 || daySteps > maxSteps) {
            maxSteps = daySteps;
            maxDay = day;
        }

        if (daySteps >= 10000) cout << "Good job!!!\n";
        else cout << "Not so good...\n";
    }

    int avg = total / 7;

    cout << "~Weekly report~\n";
    cout << "Total steps: " << total << "\n";

    cout << "Day with min steps: ";
    if (minDay == 1) cout << "Monday\n";
    if (minDay == 2) cout << "Tuesday\n";
    if (minDay == 3) cout << "Wednesday\n";
    if (minDay == 4) cout << "Thursday\n";
    if (minDay == 5) cout << "Friday\n";
    if (minDay == 6) cout << "Saturday\n";
    if (minDay == 7) cout << "Sunday\n";

    cout << "Day with max steps: ";
    if (maxDay == 1) cout << "Monday\n";
    if (maxDay == 2) cout << "Tuesday\n";
    if (maxDay == 3) cout << "Wednesday\n";
    if (maxDay == 4) cout << "Thursday\n";
    if (maxDay == 5) cout << "Friday\n";
    if (maxDay == 6) cout << "Saturday\n";
    if (maxDay == 7) cout << "Sunday\n";

    cout << "Average per day: " << avg << "\n";

    cout << "Performance: ";
    if (avg < 4000) cout << "Много зле";
    else if (avg < 8000) cout << "Може и по-добре";
    else if (avg < 12000) cout << "Много добре";
    else if (avg < 16000) cout << "Отлично";
    else cout << "Машина";

    return 0;
}
