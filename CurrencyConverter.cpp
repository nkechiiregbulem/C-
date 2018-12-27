//
//  main.cpp
//  Currency Converter
//
//  Created by Nkechi Iregbulem on 12/24/18.
//  Copyright © 2018 Nkechi Iregbulem. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    // 1$ =.72 euro, 1$=0.60gbp, 1$ = 102.15 yen, 1$ = 1.10 CAD
    string yes_no = "yes";
    while (yes_no == "yes") {
        float AMOUNT2;
        cout << "Enter the amount you wish to convert in US Dollars($$) : " << endl;
        cin >> AMOUNT2;
        int select2;
        cout << "1) EURO/USD" << endl;
        cout << "2) YEN/USD" << endl;
        cout << "3) CAD/USD" << endl;
        cout << "4) GBP/USD" << endl;
        cin >> select2;
        switch(select2)
        {
            case 1:
                cout << "$""1" " → " " €""0.88" << endl;
                cout <<"$" <<AMOUNT2<< " = "<<(AMOUNT2*0.88) << " EURO" << endl;
                break;
            case 2:
                cout <<"$" "1" " → " "¥" "112.97" << endl;
                cout <<"$" << AMOUNT2<<" = " << (AMOUNT2*112.97) << " YEN" <<endl;
                break;
            case 3:
                cout <<"$" "1" " → " "C$" "1.34" << endl;
                cout << "$" << AMOUNT2<< " = " <<(AMOUNT2*1.34)<< " CAD" <<endl;
                break;
            case 4:
                cout << "$" "1" " → " "£" "0.79" << endl;
                cout << "$" << AMOUNT2<< " = " << (AMOUNT2*0.79) << " GBP" <<endl;
                break;
        }
        cout << "Enter yes to convert again" << endl;
        cin >> yes_no;
    };
    
    char exit;
    cin >> exit;
    return 0;
}
