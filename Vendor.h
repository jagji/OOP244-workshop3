
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

#ifndef VENDOR_H
#define VENDOR_H

#include "Icecream.h"

namespace seneca{

    class Vendor {
    private:
        Icecream* orders;
        int numOrders;

    public:

        void setEmpty(); 
        void takeOrders(); 
        void displayOrders() const;
        void clearData(); 

    };

}

#endif // !VENDOR_H
