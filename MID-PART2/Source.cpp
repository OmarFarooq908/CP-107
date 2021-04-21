#include <iostream>

using namespace std;

int main() {

	int number[10000];
	int element;
	int count[10000];
	// Name   : Muhammad Omar Farooq
	// Reg No : 20-CP-33

	cout << " ________________________________________________________________\n";
	cout << "|\t\t\t\t\t\t\t         |\n";
	cout << "| In the Name of Allah, the Most  Gracious and the Most Merciful |" << endl;
	cout << "|\tProgrammed by : Muhammad Omar Farooq\t\t         |\n";
	cout << "|\tReg No : 20-CP-33\t\t\t\t         |\n";
	cout << "|\tSubmitted To : Ma'am Afshan Jamil\t\t         |\n";
	cout << "|\tDepartment of Computer Engineering\t\t         |\n";
	cout << "|  University of Engineering and Technology, Taxila\t\t |\n";
	cout << "|________________________________________________________________|\n\n";
	bool first = true;
	cout << ">> Enter the number of elements of integers you want to enter >> ";
	cin >> element;
	for (int i = 0; i < element; i++) {
		cout << ">> Enter a number >> ";
		cin >> number[i];
	}
	// Initializing array.
	for (int i = 0; i < element; i++) {
		count[i] = 0;
	}
	for (int i = 0; i < element; i++) {
		for (int j = 0; j < element; j++) {
			if (number[i] == number[j]) {
				count[i]++;
			}
		}
	}
	cout << "\tN\t\tCount\n";
	for (int i = 0; i < element; i++) {
		if (i != 0) {
			for (int j = i - 1; j >= 0; j--) {
				if (number[i] == number[j]) {
					first = false;
					break;
				}
				else {
					first = true;
				}
			}
		}
		if (first) {
			cout << "\t" << number[i] << "\t\t" << count[i] << endl;
		}
	}
	return 0;
}