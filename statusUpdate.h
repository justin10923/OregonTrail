// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 3

#ifndef STATUSUPDATE_H
#define STATUSUPDATE_H
#include <string>
#include <iostream>
#include <fstream>
#include "statusUpdate.h"
#include "driver.h"
#include "theStore.h"
#include "event.h"


using namespace std;

//defines a class book

class statusUpdate
{
    public:
    //setters
    void displayCurrentStatus(driver driver1, store store1);
    void travelSomeMileage();
    //getters
    void readCheckpoints();
    void getDistance();
    void displayCheckpoints();
    int getMileage(int index);
    string getCheckpoint(int index);
    int getRandomRange(int min, int max);
    int distanceTo();
    int getMiles();

    void saveFinalStats(driver driver1, store store1);

    private:
    string checkpoint[100]; //large array for checkpoints
    int mileage[100]; //large array for mileage markers of checkpoints
    int milesTraveled = 0; //intiailzies miles to 0
};

#endif