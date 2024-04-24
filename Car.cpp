
/* name: jagjit kaur
* id: 156806226
* email:jkaur682@myseneca.ca
* professor: elena bassichilvi
* i had done all the coding by myself  and only copied the code that was given by my professor
*/



#define _CRT_SECURE_NO_WARNINGS



#include "Car.h"


#include <cstring>

#include <iostream>

#include <iomanip>

namespace seneca

{

    using namespace std;


    Car::Car() : m_makeModel(nullptr), m_serviceDesc(nullptr), m_cost(0.0)

    {
        setEmpty();

    }



    Car::~Car()
    
    {
        deallocateMemory();


    }

    bool Car::isEmpty() const
    
   {

        return m_makeModel == nullptr || m_serviceDesc == nullptr || std::strlen(m_makeModel) == 0 || std::strlen(m_serviceDesc) == 0;


    }

    void Car::setEmpty()
    
    {
        m_licencePlate[0] = '\0';


        deallocateMemory();


        m_cost = 0.0;


    }

    void Car::deallocateMemory()

    {

        delete[] m_makeModel;


        delete[] m_serviceDesc;

        m_makeModel = nullptr;

        m_serviceDesc = nullptr;


    }


    void Car::set(const char plateNo[], const char* carMakeModel, const char* serviceDesc, double serviceCost)

    {

        deallocateMemory();

        setEmpty();


        if (plateNo != nullptr && carMakeModel != nullptr && serviceDesc != nullptr && std::strlen(plateNo) > 0 && std::strlen(carMakeModel) > 0 && std::strlen(serviceDesc) > 0)
        
        {
            strncpy(m_licencePlate, plateNo, 8);


            m_licencePlate[8] = '\0';


            m_makeModel = new char[strlen(carMakeModel) + 1];


            strcpy(m_makeModel, carMakeModel);



            m_serviceDesc = new char[strlen(serviceDesc) + 1];


            strcpy(m_serviceDesc, serviceDesc);



            m_cost = serviceCost;



        }

    }


    void Car::display() const 
    

    {

        if (!isEmpty())
        

        {
            cout << left << setw(15) << "License Plate:" << right << setw(20) << m_licencePlate << endl;


            cout << left << setw(15) << "Model:" << right << setw(20) << m_makeModel << endl;

            cout << left << setw(15) << "Service Name:" << right << setw(20) << m_serviceDesc << endl;


            cout << left << setw(15) << "Service Cost:" << right << setw(20) << fixed << setprecision(2) << m_cost << endl;


        }

    }


}

