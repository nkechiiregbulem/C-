//
//  main.cpp
//  Random Episode Generator
//
//  Created by Nkechi Iregbulem on 12/18/18.
//  Copyright © 2018 Nkechi Iregbulem. All rights reserved.
//

#include <iostream>
#include <string>
#include <random>
#include <time.h>
using namespace std;

int main() {
    srand( static_cast<unsigned int>(time(NULL)));
    
    const int Friends[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    const string Friends1[4] = {"Friends: Episode1", "Friends: Episode 2", "Friends" , "Hope"};
    const string BoyMeetsWorld [4] = {"Season1: Episode1", "Season2: Episode 2", "Season3: Episode3", "Season4: Episode4"};
    const string TheOffice[4] = {"Season1: Episode1", "Season2: Episode 2", "Season3: Episode3", "Season4: Episode4"};
    const string Seinfeld[4] = {"Season1: Episode1", "Season2: Episode 2", "Season3: Episode3", "Season4: Episode4"};
    int randomIndex = rand() % 10;
    int randomIndex2 = rand() % 4;
    
    // cout << Friends[randomIndex] << endl;
    //cout << Friends1[randomIndex2] << endl;
    //cout << BoyMeetsWorld[randomIndex2] << endl;
    //cout << TheOffice[randomIndex2] << endl;
    
    
    int option = 0;
    cout << "1) Friends" << endl;
    cout << "2) Boy Meets World" << endl;
    cout << "3) The Office" << endl;
    cout << "4) Seinfeld" << endl;
    while (option < 1 || option > 4) {
        cout << "Please Enter an Option" << endl;
        cin >> option;
    };
    
    if (option == 1) {
        cout << "You have chosen to watch Friends." << endl << " Please wait a moment while we generate an episode" << endl;
        cout << "........................." << endl;
        cout << Friends1[randomIndex2] << endl;
    }
    if (option == 2) {
        cout << "You have chosen to watch Boy Meets World." << "Please wait a moment while we generate an episode" << endl;
        cout << ".........................." << endl;
        cout << BoyMeetsWorld[randomIndex2] << endl;
    }
    if (option == 3) {
        cout << "You have chosen to watch The Office." << "Please wait a moment while we generate an episode" << endl;
        cout << "......................" << endl;
        cout << TheOffice[randomIndex2] << endl;
    }
    if (option == 4) {
        cout << "You have chosen to watch Seinfeld." << "Please wait a moment while we generate an episode" << endl;
        cout << "......................" << endl;
        cout << Seinfeld[randomIndex2] << endl;
    }

return 0;
}

    


    
    
    

