
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
#include "Vendor.h"
#include "Icecream.h"

using namespace std;

namespace seneca {

    void Vendor::setEmpty() {
        numOrders = 0;
    }

    void Vendor::takeOrders() {

        cout << "Seneca Icecream shop" << endl;

        cout << "          @" << endl;
        cout << "        (' .)" << endl;
        cout << "       (*.`. )" << endl;
        cout << "        \\###/" << endl;
        cout << "         \\#/" << endl;
        cout << "          V" << endl;

        cout << "How many Icecreams?" << endl;
        cout << "> ";
        cin >> numOrders;

        orders = new Icecream[numOrders];

        for (int i = 0; i < numOrders; ++i) {
            cout << "Order number " << i + 1 << ":" << endl;
            orders[i].getOrder();
        }
    }

    void Vendor::displayOrders() const {
        if (numOrders <= 0) {
            cout << "No orders to display." << endl;
            return;
        }

        double totalOrderPrice = 0.0;

        cout << "\n";
        cout << "********** Order Summary **********" << endl;
        for (int i = 0; i < numOrders; ++i) {
            cout << "Order No: " << i + 1 << ":" << endl;
            orders[i].printOrder();

            totalOrderPrice += orders[i].calculateTotal();

            if (i != numOrders - 1) {
                cout << "\n";
            }
        }

        double tax = 0.13 * totalOrderPrice;
        double totalPriceWithTax = totalOrderPrice + tax;

        cout << "-----------------------------------" << endl;
        cout << "Price:                        " << totalOrderPrice << endl;
        cout << "Tax:                           " << tax << endl;
        cout << "Total Price ($):              " << totalPriceWithTax << endl;
    }

    void Vendor::clearData() {
        delete[] orders;
        orders = nullptr;
        numOrders = 0;
    }

} // namespace seneca
