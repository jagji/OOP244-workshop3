
/*
*
*   Name    : jagjit kaur 
*   Email   : jkaur682@myseneca.ca
*   Student ID: 156806226
*   Date    : 09-02-2024
*
*
*

    I have done all the coding by myself and only copied the code that my professor provided to complete my workshops and assignments.

*
*/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <iomanip>
#include <limits> 
#include "Vendor.h"
#include "Icecream.h"

using namespace std;

namespace seneca {

    void Icecream::getOrder() {
        displayFlavorMenu();

        cout << "Number of Scoops (max 3)" << endl;
        bool flag = true;
        while (flag) {
            cout << "> ";
            cin >> numScoops;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry, retry" << endl;
                flag = true;
            }
            else if (numScoops > 0 && numScoops < 4) {
                flag = false;
            }
            else {
                cout << "Invlid value(1<=val<=3)" << endl;
                flag = true;
            }
        }

        char waferChoice[5];
        cout << "Vanilla wafer cone?" << endl;
        cout << "(Y)es/(N)o ";

        bool validInput = true;
        while (validInput) {
            cout << "> ";
            cin >> waferChoice;
            if ((waferChoice[0] == 'Y' || waferChoice[0] == 'y' || waferChoice[0] == 'N' || waferChoice[0] == 'n') && (waferChoice[1] == '\0')) {
                validInput = false;
            }
            else {
                cout << "Only Y or N are acceptable:" << endl;
                cin.clear();
                validInput = true;
            }
        }

        hasVanillaWafer = (waferChoice[0] == 'Y' || waferChoice[0] == 'y');

    }

    void Icecream::printOrder() {

        cout << "Order details:                Price" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Number of scoops, " << numScoops << " total:    " << fixed << setprecision(2) << basePrice * numScoops << endl;




        double flavorPrice = 0.00;

        if (flavorChoice == 1) {
            for (int i = 0; i < numScoops; i++) {
                flavorPrice++;
            }
        }

        switch (flavorChoice) {
        case 1:
            cout << "Chocolate flavour:             " << flavorPrice << endl;
            break;
        case 2:
            cout << "Strawberry flavour:            " << endl;
            break;
        case 3:
            cout << "Mango flavour" << endl;
            break;
        case 4:
            cout << "Tutti fruit flavour            " << endl;
            break;
        default:
            cout << "Almond crunch flavour          " << endl;
        }

        double waferPrice = calculateWaferPrice();
        cout << "Vanilla Wafer:                 " << waferPrice << endl;

        totalPrice = basePrice * numScoops + flavorPrice + waferPrice;
        cout << "Price:                        " << totalPrice << endl;
        //cout << "\n\n";
    }

    void Icecream::displayFlavorMenu() {
        cout << "Select flavour:" << endl;
        cout << "----------------" << endl;
        cout << "1: Chocolate" << endl;
        cout << "2: Strawberry" << endl;
        cout << "3: Mango" << endl;
        cout << "4: Tutti fruit" << endl;
        cout << "5: Almond crunch" << endl;
        cout << "----------------" << endl;

        bool flag = true;
        while (flag) {
            cout << "> ";
            cin >> flavorChoice;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
                cout << "Invalid entry, retry" << endl;
                flag = true;
            }
            else if (flavorChoice > 0 && flavorChoice < 6) {
                flag = false;
            }
            else {
                cout << "Invlid value(1<=val<=5)" << endl;
                flag = true;
            }
        }
    }



    double Icecream::calculateTotal() const {

        return totalPrice;

    }

    double Icecream::calculateWaferPrice() const {
        return (hasVanillaWafer ? 5.00 : 0.00);
    }
}
