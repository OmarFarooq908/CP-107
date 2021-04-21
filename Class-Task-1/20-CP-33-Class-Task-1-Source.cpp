#include<iostream>
#include<string>

using namespace std;

int main() {
	// In the Name of Allah the Most Gracious and the Most Merciful.
	// Reg No : 20-CP-33
	// Name   : Muhammad Omar Farooq
	char ending;
	string user_name, instructor_name,food,adjective,color,animal;
	float number_btw_100_120;

	// Line 15-28 : Introduction whilst making use of escape sequence. 
	cout << " _______________________________________________________________\n";
	cout << "|\t\t\t\t\t\t\t\t|\n";
	cout << "| In the Name of Allah, the Most Gracious and the Most Merciful |\n";
	cout << "|_______________________________________________________________|\n\n";
	cout << " _______________________________________________\n"; 
	cout << "|\t\t\t\t\t\t|\n";
	cout << "|\t\tSubmitted By\t\t\t|\n";
	cout << "|\t\tMuhammad Omar Farooq\t\t|\n";
	cout << "|\t\t20-CP-33\t\t\t|\n";
	cout << "|\t\t\t\t\t\t|\n";
	cout << "|\t\tSubmitted To\t\t\t|\n";
	cout << "|\t\tDr. Afshan Jamil\t\t|\n";
	cout << "|\t\t\t\t\t\t|\n";
	cout << "|_______________________________________________|\n\n";

	// Line 32,33,41 to 49 and Line 58 to 64: Output statemnts telling the user what to input.
	// And then getting the input from the user.
	cout << " >> Enter first/last name of your instructor >> ";
	cin >> instructor_name;

	// Line 42 : Required function to clear the value that gets stored in the variable that uses getline,
	// due to calling cin prior to calling getline.

	// Line 43 : This function skips 1000 characters or skips to the beginning of the next line,
	// depending on whether a newline character is encountered before 1000 characters are skipped
	// Line 44 and 47 : This function accepts white spaces as input.
	cout << " >> Enter your name >> ";
	cin.clear();								
	cin.ignore(1000, '\n');
	getline(cin, user_name);

	cout << " >>Enter name of a food >> ";
	getline(cin, food);
	cout << " >> Enter a number between 100 and 120 >> ";
	cin >> number_btw_100_120;

	// Line 53 to 56 : If the variable number_btw_100_120 is not between the range of 100 and 120,
	// then print Invalid Range! and end the program.
	if (number_btw_100_120 < 100 || number_btw_100_120 > 120) {
		cout << " >> Invalid Range! ";
		return 0;
	}

	cout << " >> Enter an Adjective >> ";
	cin >> adjective;
	cout << " >> Enter a color >> ";
	cin >> color;
	cout << " >> Enter an animal >> ";
	cin >> animal;
	cout << "\n\nOutput Story: \n";
	cout << "Dear Instructor " << instructor_name << ",\n\tI am sorry that I am unable to turn in my homework at this time.First, I ate a rotten \n\t" << food << ", which made me turn " << color << " and extremely ill.I came down with a fever of " << number_btw_100_120 << ".\n\tNext, my " << adjective << " pet " << animal << " must have smelled the remains of the " << food << " on my homework, because he ate it.\n\tI am currently rewriting my homeworkand hope you will accept it late.\n\nSincerely,\n\n" << user_name << endl;
	cout << "\n";
	system("pause");
	return 0;
}