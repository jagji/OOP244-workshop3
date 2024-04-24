/* name: jagjit kaur
* id: 156806226
* email:jkaur682@myseneca.ca
* professor: elena bassichilvi
* i had done all the coding by myself  and only copied the code that was given by my professor
*/





#define _CRT_SECURE_NO_WARNINGS



#include "Customer.h"


#include <cstring>


#include <iostream>


#include <iomanip>



using namespace std;



namespace seneca 

{

    Customer::Customer() 

    {

        setEmpty();

    }



    Customer::~Customer() 
    
    {


        deallocateMemory();



    }


    bool Customer::isEmpty() const
    
    {


        return m_name == nullptr || m_name[0] == '\0' || m_car == nullptr;


    }

    void Customer::setEmpty()
    
    
    {
        m_id = 0;


        m_name = nullptr;



        m_car = nullptr;


    }



    void Customer::deallocateMemory()
    
    {

        delete[] m_name;

        setEmpty();

    }


    void Customer::set(int customerId, const char* name, const Car* car)
    {
        deallocateMemory();

        if (name != nullptr && name[0] != '\0' && car != nullptr)
        {

            m_id = customerId;


            m_name = new char[strlen(name) + 1];

            strcpy(m_name, name);


            m_car = car;

        }

        else
        {

            setEmpty();

        }


    }


    void Customer::display() const
    {

        if (!isEmpty())
        
        {
            cout << left << setw(15) << "Customer ID:" << right << setw(20) << m_id << endl


                << left << setw(15) << "First Name:" << right << setw(20) << m_name << endl;


            m_car->display();


        }
        

    }



    const Car& Customer::car() const
    
    {

        return *m_car;


    }


}

