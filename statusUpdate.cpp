// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 3

//Class implementation for all member functions and data members


#include "statusUpdate.h"
#include "driver.h"
#include "theStore.h"
#include "event.h"
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <cctype>

using namespace std;

void statusUpdate::displayCurrentStatus(driver driver1, store store1) //returns title
{
    int difference = ((getMileage(distanceTo()) - milesTraveled));
    string next = getCheckpoint(distanceTo()+1);
    cout << driver1.getMonth() << "/" << driver1.getDay() << "/" << driver1.getYear() << endl;
    cout << "Miles Traveled: " << milesTraveled << endl;
    cout << "Distance Until Next Milestone: " << difference << endl;
    cout << "Next Milestone: " << next << endl;
    cout << "Number of Bullets: " << store1.getBullets() << endl;
    cout << "Money Left: " << store1.getTotalMoney() << endl;
    cout << "Yokes Left: " << store1.getYokes() << endl;
    cout << "Food Left: " << store1.getFood() << endl;


}

void statusUpdate::readCheckpoints() //reads from file as a requirement
{
    ifstream input_file;
    input_file.open("milestones.txt");
    string line = "";
    int index1, index2 = 0;
    while(getline(input_file, line))
    {
            if(isalpha(line[0]))
            {
                checkpoint[index1] = line;
                index1++;
            }
            if(isdigit(line[0]))
            {
                mileage[index2] = stoi(line);
                index2++;
            }
    }
}

void statusUpdate::travelSomeMileage() //travels mileage that is randomized for each turn
{
    readCheckpoints();
    int miles = getRandomRange(70,140);
    milesTraveled = milesTraveled + miles;

}

int statusUpdate::getMiles() //returns miles
{
    return milesTraveled;
}

int statusUpdate::getRandomRange(int min, int max)
{
    return (rand() % (max - min + 1)) + min;
}

int statusUpdate::distanceTo() //used to find where along trail you are
{
    for(int i = 0; i < 15; i++)
    {
        if(milesTraveled >= mileage[i] && milesTraveled <= mileage[i+1])
        {
            return i+1;
        }
    }
    return 14;
}

int statusUpdate::getMileage(int index) //returns miles at checkpoints
{
    return mileage[index];
}

string statusUpdate::getCheckpoint(int index)
{
    return checkpoint[index];
}

void statusUpdate::saveFinalStats(driver driver1, store store1) //final stat cout written to "EndgameStats.txt"
{
    ofstream output_file;
    output_file.open("EndgameStats.txt");
    int difference = ((getMileage(distanceTo()) - milesTraveled));
    string next = getCheckpoint(distanceTo()+1);
    output_file << driver1.getMonth() << "/" << driver1.getDay() << "/" << driver1.getYear() << endl;
    output_file << "Miles Traveled: " << milesTraveled << endl;
    output_file << "Distance Until Next Milestone: " << difference << endl;
    output_file << "Next Milestone: " << next << endl;
    output_file << "Number of Bullets: " << store1.getBullets() << endl;
    output_file<< "Money Left: " << store1.getTotalMoney() << endl;
}
