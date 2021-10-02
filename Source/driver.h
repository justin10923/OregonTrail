// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 3

#ifndef DRIVER_H
#define DRIVER_H
#include <string>
#include <iostream>

using namespace std;
//defines a class book
class driver
{
    public:
    //constructor
    driver();

    //setters
    void printIntro();
    void setCompanions();
    void setMainName();
    void chooseDate();
    void setMonth(int input);
    void setDay(int input);
    void setYear(int input);
    bool iterateDays(int add);
    void rest();
    


    //getters
    string getCompanions(int index);
    string getMainName();
    int getMonth();
    int getDay();
    int getYear();
    int getMilesTraveled();


    
    private:
    string playerName; //main name
    string names[4]; //companion name
    int milesOregon = 2040; //total miles to be traveled
    int maxDate = 11301847; //date that cannot be exceeded
    int day = 28; //start date default
    int year = 1847;
    int month = 3;
};

#endif