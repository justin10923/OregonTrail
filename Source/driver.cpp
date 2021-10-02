// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 3


#include "statusUpdate.h"
#include "driver.h"
#include "theStore.h"
#include "event.h"
#include <iostream>
#include <string>

using namespace std;

//Class implementation for all member functions and data members


void driver::printIntro() //returns title
{
    cout << "THIS PROGRAM SIMULATES A TRIP OVER THE OREGON TRAIL FROM" << endl;
    cout << "INDEPENDENCE, MISSOURI TO OREGON CITY, OREGON IN 1847."<< endl;
    cout << "YOUR FAMILY OF FIVE WILL COVER THE 2040 MILE OREGON TRAIL " << endl;
    cout << "IN 5-6 MONTHS --- IF YOU MAKE IT ALIVE." << endl;
}


driver::driver() //sets all data member to 0 or emtpy
{
    for(int i = 0; i < 4; i++)
    {
        names[i] = "";
    }
    playerName = "";
}

void driver::setMainName() //username
{
    string input;
    cout << "Player, enter your name" << endl;
    cin >> input;
    playerName = input;
}

void driver::setCompanions() //companiion name initialization
{
    string input1, input2, input3, input4;
    cout << "Enter four traveling companions: " << endl;
    cout << "1. ";
    cin >> input1;
    cout << "2. ";
    cin >> input2;
    cout << "3. ";
    cin >> input3;
    cout << "4. ";
    cin >> input4;
    names[0] = input1;
    names[1] = input2;
    names[2] = input3;
    names[3] = input4;
}

string driver::getCompanions(int index) //gets companion names
{
    return names[index];
}

string driver::getMainName() //gets usernames
{
    return playerName;
}

void driver::chooseDate() //chooses dates
{
    int option;
    cout << "1. Start on date 03/28/1847" << endl;
    cout << "2. Start on date of your own choice" << endl;
    cin >> option;
    if(option == 2)
    {
        cout << "Date must be between 03/01/1847 and 05/01/1847" << endl;
        int newDay;
        int newMonth;
        cout << "Enter Month" << endl;
        cin >> newMonth;
        cout << "Enter Day" << endl;
        cin >> newDay;
        if(newMonth >= 3 && newMonth <= 5 && newDay >= 1 && newDay <= 31) //limitations on 1847
        {
            month = newMonth;
            day = newDay;
            cout << "New Start Date set at " << month << "/" << day << "/1847";
            return;
        }
        cout << "Date is not between required days";
    }
}

int driver::getMonth() //returns month
{
    return month;
}

int driver::getDay() //returns day
{
    return day;
}

int driver::getYear() //returns year
{
    return year;
}

void driver::setMonth(int input) 
{
    month = input;
}

void driver::setDay(int input)
{
    day = input;
}

void driver::setYear(int input)
{
    year = input;
}

bool driver::iterateDays(int add) //months between 03 and 11
//main file for adjusting date based on turns
{

    int addition = add;
    int newDays;
    int remainderDays;
    switch(month)
    {
        case 3: //31
        {
            newDays = day + addition;
            if(newDays > 31)
            {
                month++;
                remainderDays = 31 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }
        case 4:
        {
            newDays = day + addition;
            if(newDays > 30)
            {
                month++;
                remainderDays = 30 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        } //30
        case 5: //31 
        {
           newDays = day + addition;
            if(newDays > 31)
            {
                month++;
                remainderDays = 31 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }  
        case 6: //30
        {
            newDays = day + addition;
            if(newDays > 30)
            {
                month++;
                remainderDays = 30 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }
        case 7: //31
        {
            newDays = day + addition;
            if(newDays > 31)
            {
                month++;
                remainderDays = 31 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }
        case 8: //31
        {
            newDays = day + addition;
            if(newDays > 31)
            {
                month++;
                remainderDays = 31 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }
        case 9: //30 
        {
            newDays = day + addition;
            if(newDays > 30)
            {
                month++;
                remainderDays = 30 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }
        case 10: //31
        {
            newDays = day + addition;
            if(newDays > 31)
            {
                month++;
                remainderDays = 31 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }
        case 11: //30
        {
            if(day >= 30)
            {
                return false;
            }
            newDays = day + addition;
            if(newDays > 30)
            {
                month++;
                remainderDays = 30 - day;
                day = (addition - remainderDays);
                return true;
            }
            day = day + addition;
            return true;
        }
        case 12:
        {
            cout << "You did not reach the end in time. Game over.";
            return false;
        }
        default:
        {
            cout << "an error occured with accessing date" << endl;
            return true;
        }
    }
}







