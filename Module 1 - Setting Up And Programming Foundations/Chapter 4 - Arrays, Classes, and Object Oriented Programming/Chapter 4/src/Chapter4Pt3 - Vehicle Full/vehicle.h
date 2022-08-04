#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Vehicle 
{
protected:
    int m_year;
    int m_miles;
    string m_make;
public:
    Vehicle();

    Vehicle(int year, int miles, string brand) :
        m_year(year),
        m_miles(miles),
        m_make(brand) {}

    virtual ~Vehicle();

    int GetYear();
    int GetMiles();
    string GetBrand();
    void SetYear(int year);
    void SetMiles(int miles);
    void SetBrand(string brand);


    void Drive(int miles)
    {
        m_miles += miles;
    }

    void Print()
    {
        cout << "Brand: " << m_make << endl;
        cout << "Year: " << m_year << endl;
        cout << "Miles: " << m_miles << endl;
        cout << "\n" << endl;
    }
};