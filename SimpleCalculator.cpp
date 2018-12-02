#include <iostream>
#include <string>
using namespace std;

int main() 
{
	cout << "=======================" << endl;
	cout << "     CALCULATOR        " << endl;
	cout << "=======================" << endl;
	string yes_no = "yes";
	while (yes_no == "yes") {
		int option = 0;
		cout << "(1) Addition" << endl;
		cout << "(2) Subtraction" << endl;
		cout << "(3) Multiplication" << endl;
		cout << "(4) Division" << endl;
		cout << "(5) Compare" << endl;
		cout << "(6) Random" << endl;
		while (option < 1 || option > 6) {
			cout << "Please Enter and option 1-6" << endl;
			cin >> option;
		};

		cout << endl << endl;
		int number1;
		int number2;
		int answer;

		if (option == 1) {
			// Chosen Option is Addition
			cout << "You have selected Addition" << endl;
			cout << " Now enter a number " << endl;
			cin >> number1;
			cout << "Now enter a second number " << endl;
			cin >> number2;
			answer = number1 + number2;
			cout << "Answer: " << answer << endl;
		}
		else {
			// Chosen option is Subtraction
			if (option == 2) {
				cout << "You have selected Subtraction " << endl;
				cout << "Now enter a number" << endl;
				cin >> number1;
				cout << "Now enter a second number" << endl;
				cin >> number2;
				answer = number1 - number2;
				cout << "Answer: " << answer << endl;

			}
			else {
				// Chosen option is Multiplication
				if (option == 3) {
					cout << "You have selected Multiplication " << endl;
					cout << "Now enter a number" << endl;
					cin >> number1;
					cout << "Now enter a second number" << endl;
					cin >> number2;
					answer = number1 * number2;
					cout << "Answer: " << answer << endl;

				}
				else {
					// Chosen option is Division
					if (option == 4) 
					{
						cout << "You have selected Division " << endl;
						cout << "Now enter a number" << endl;
						cin >> number1;
						cout << "Now enter a second number" << endl;
						cin >> number2;
						answer = number1 / number2;
						cout << "Answer: " << answer << endl;

					}
					else {
						// Chosen option is Compare
						if (option == 5) {
							cout << "You have selected Compare " << endl;
							cout << "Now enter a number " << endl;
							cin >> number1;
							cout << "Now enter a second number " << endl;
							cin >> number2;
							if (number1 < number2) {
								cout << number1 << " is less than " << number2 << endl;
							}
							else {
								cout << number1 << " is greater than " << number2 << endl;
								}
							}
						}
						
					}




				}


			}
			cout << "Enter yes to play again" << endl;
			cin >> yes_no;
		};
	char exit;
	cin >> exit;
	return 0;
	}


