/* name: jagjit kaur
* id: 156806226
* email:jkaur682@myseneca.ca
* professor: elena bassichilvi
* i had done all the coding by myself  and only copied the code that was given by my professor
*/



#define _CRT_SECURE_NO_WARNINGS



#ifndef SENECA_CAR_H



#define SENECA_CAR_H



namespace seneca

{

    class Car

    {
        char m_licencePlate[9];

        // +1 for null terminator


        char* m_makeModel;


        char* m_serviceDesc;


        double m_cost;



    public:


        Car();


        ~Car();



        bool isEmpty() const;


        void setEmpty();




        void deallocateMemory();


        void set(const char plateNo[], const char* carMakeModel, const char* serviceDesc, double serviceCost);


        void display() const;


    };




}


#endif
