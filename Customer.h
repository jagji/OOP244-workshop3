
/* name: jagjit kaur
* id: 156806226
* email:jkaur682@myseneca.ca
* professor: elena bassichilvi
* i had done all the coding by myself  and only copied the code that was given by my professor
*/



#define _CRT_SECURE_NO_WARNINGS



#ifndef CUSTOMER_H


#define CUSTOMER_H



#include "Car.h"



namespace seneca

{

    class Customer
    
    {
    private:


        int m_id;

        char* m_name;


        const Car* m_car;


    public:


        Customer();


        ~Customer();


        bool isEmpty() const;


        void setEmpty();


        void deallocateMemory();


        void set(int customerId, const char* name, const Car* car);


        void display() const;


        const Car& car() const;


    };




}


#endif

