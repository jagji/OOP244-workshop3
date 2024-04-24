
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


#ifndef ICECREAM_H
#define ICECREAM_H

namespace seneca {

	class Icecream {
    private:
        int flavorChoice = 0;
        int numScoops = 0;
        bool hasVanillaWafer = false;
        double basePrice = 5;
        double totalPrice = 0.00;

    public:

        void getOrder();
        void printOrder();
        void displayFlavorMenu();
        double calculateTotal() const;
        double calculateWaferPrice() const;
	};

}

#endif // !ICECREAM_H
