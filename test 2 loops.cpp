
#include <iostream>
using namespace std;
int main()
{
	int count;
	cout << "Enter number count:";
	cin >> count;
	cout << "Eneter numbers:";
	int sumPos = 0;
	int countPos = 0;
	int sumNeg = 0;
	int countNeg = 0;
	int countZ = 0;
	for (int i = 1; i <= count; i++) {
		int num;
		cin>> num;
		if (num > 0) {
			sumPos += num;
				countPos++;
		}
		else if (num < 0) {
			sumNeg += num;
				countNeg++;
		}
		else if (num == 0) {
			countZ++;
		}
		else {
			cout << "invalid number";
		}
	}
	cout << "Positive number count:" << countPos << "  ";
	cout << " sum:" << sumPos << "  " << endl;
	cout << " Negative numbers count:" << countNeg << "  ";
	cout << "sum:" << sumNeg << "  ";
	cout << "Count of zeros:" << countZ;
}
