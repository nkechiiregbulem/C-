#include <iostream>
#include <string>
using namespace std;

int main() {
		string seniority = " ";
		string gender = " ";
		string P_or_D = " ";
		int option = 0;
		cout << "=========================================" << endl;
		cout << " Hello! Welcome to Macy's Management!! " << endl;
		cout << "=========================================" << endl;
		string yes_no = "yes";
		while (yes_no == "yes") {
			cout << " Is this present for a senior, adult, teen, or child? " << endl;
			cin >> seniority;
			if (seniority == "adult" || seniority == "senior") {
				cout << "Is this for a man or woman? " << endl;
				cin >> gender;
				cout << "Do you want something practical or decorative? " << endl;
				cin >> P_or_D;
				cout << "Ok! So this present is for a " << seniority << " who is a " << gender << " and you want something that is " << P_or_D << "." << endl;
				cout << " Alright, I will pull up some suggestions." << endl;
				cout << "==============================================" << endl;
				cout << "          C A T E G O R I E S                 " << endl;
				cout << "==============================================" << endl;
				cout << "1) Apparel  " << endl;
				cout << "2) Home Decor " << endl;
				cout << "3) Personal Care " << endl;
				cout << "4) Electronics " << endl;
				while (option < 1 || option > 4) {
					cout << "Please select a option 1-4 in Categories " << endl;
					cin >> option;
				};
				if (option == 1 && gender == "woman") {
					cout << " Since this is for a " << gender << " I will direct you to our Women's Apparel Page so you can choose the product that you like." << endl;
				}
				else if (option == 1 && gender == "man") {
					cout << " Since this is for a " << gender << " I will direct you to out Men's Apparel Page so you can choose the product that you like." << endl;
				}
				if (option == 2) {
					cout << "Since this is for a " << gender << " I will direct you to our  Home Decor Page so you can choose the product that you like." << endl;
				}
				if (option == 3 && gender == "woman") {
					cout << " Since this is for a " << gender << " I will direct you towards our Personal Care Page for Women so you can choose the product that you like." << endl;
				}
				else if (option == 3 && gender == "man") {
					cout << "Since this is for a " << gender << " I will direct you towards our Personal Care Page for Men so you can choose the product that you like." << endl;
				}
				if (option == 4) {
					cout << " I will direct you to our Electronics Page " << endl;
				}
			}
			else if (seniority == "teen" || seniority == "child") {
				cout << "Is this for a girl or boy? ";
				cin >> gender;
				cout << "Do you want something practical or decortive? " << endl;
				cin >> P_or_D;
				cout << "Ok! So this present is for a " << seniority << " who is a " << gender << " and you want something that is " << P_or_D << "." << endl;
				cout << " Alright I will pull up some suggestions." << endl;
				cout << "==============================================" << endl;
				cout << "          C A T E G O R I E S                 " << endl;
				cout << "==============================================" << endl;
				cout << "1) Apparel  " << endl;
				cout << "2) Home Decor " << endl;
				cout << "3) Personal Care " << endl;
				cout << "4) Electronics " << endl;
				while (option < 1 || option > 4) {
					cout << "Please select a option 1-4 in Categories " << endl;
					cin >> option;
				};
				if (option == 1 && gender == "girl") {
					cout << " Since this is for a " << gender << " I will direct you to our Girls's Apparel Page so you can choose the product that you like." << endl;
				}
				else if (option == 1 && gender == "boy") {
					cout << " Since this is for a " << gender << " I will direct you to out Boy's Apparel Page so you can choose the product that you like." << endl;
				}
				if (option == 2) {
					cout << "Since this is for a " << gender << " I will direct you to our Kids Home Decor Page so you can choose the product that you like." << endl;
				}
				if (option == 3 && gender == "girl") {
					cout << "Since this is for a " << gender << " I will direct you to our Personal Care page for Girl's so you can choose the product you like." << endl;
				}
				else if (option == 3 && gender == "boy") {
					cout << "Since this is for a " << gender << " I will direct you to our Personal Care page for Boy's so you can choose the product that you like." << endl;
				}
				if (option == 4) {
					cout << " I will direct you to our electronics page." << endl;
				}
			}

			cout << "Enter yes to make another purchase." << endl;
			cin >> yes_no;

		};

		



	char exit;
	cin >> exit;
	return 0;
}