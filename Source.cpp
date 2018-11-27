#include <iostream>
#include <string>
using namespace std;

int main() {
	cout << "=================================" << endl;
	cout << "Welcome to Madlibs!!" << endl;
	cout << "=================================" << endl;
	cout << "=======================" << endl;
	cout << "      S O N G S        " << endl;
	cout << "=======================" << endl;
	string yes_no="yes";
	while (yes_no == "yes") {
		int option = 0;
		cout << "1) Ariana Grande - Thank You, Next " << endl;
		cout << "2) The 1975 - It's Not Living (If It's Not With You) " << endl;
		cout << "3) Marshmello - Happier" << endl;
		cout << endl << endl << endl;
		while (option < 1 || option > 3) {
			cout << "Please Enter and option 1-3" << endl;
			cin >> option;
		};

		cout << endl << endl;
		string lyric;
		string name;
		string noun;
		string adjective;
		string body_part;
		string adjective2;

		if (option == 1) {
			// Chosen Song Lyric ("Thought I'd end up with ___ but he wasn't a ___")
			cout << "You have selected Ariana Grande's - Thank You, Next " << endl;
			cout << " Now enter a name " << endl;
			cin >> name;
			cout << "Now enter a noun " << endl;
			cin >> noun;
			cout << "Congrats!! You have successfully completed your first MADLIB" << endl;
			cout << "Thought I'd end up with " << name << " but he wasn't a " << noun << endl;

		}
		else {
			// Chosen Song Lyric ( "Distract my ___ from the __ news")
			if (option == 2) {
				cout << "You have selected The 1975 - It's Not Living (If It's Not With You) " << endl;
				cout << "Now enter a body part" << endl;
				cin >> body_part;
				cout << "Now enter an adjective" << endl;
				cin >> adjective;
				cout << "Congrats!! You have successfully completed your first MADLIB" << endl;
				cout << "Distract my " << body_part << " from the " << adjective << " news" << endl;
			}
			else {
				// Chose Song Lyric ( "Lately, I've Been __, I want you to be ___")
				if (option == 3) {
					cout << "You have selected Marshmello - Happier " << endl;
					cout << "Now enter a adjective" << endl;
					cin >> adjective;
					cout << "Now enter an adjective" << endl;
					cin >> adjective2;
					cout << "Congrats!! You have successfully completed your first MADLIB" << endl;
					cout << "Lately, I've been " << adjective << ", I want you to be " << adjective2 << endl;
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

