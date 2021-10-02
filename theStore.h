// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 2- Problem #1

#ifndef BOOK_H
#define BOOK_H
#include <string>

using namespace std;
//defines a class book
class store
{
    public:
    //setters
    void storeLoop();
    void displayInstructions();
    bool buyOxen(double oxenCount);
    bool buyFood(double foodCount);
    bool buyBullets(double bulletCount);
    bool buyMedKit();
    bool buyWagonPart();
    void setFood(int food);
    void addFood(int food);
    void setBullets(int bullets);
    void setMedkit(int med);


    //getters
    double getTotalMoney();
    void printBill();
    double getYokes();
    double getBullets();
    int getMedkit();
    int getFood();


    private:
    double cashValue = 1600; //starting cash
    double yokes = 0; //starting oxen
    double foodPounds = 0; //starting food
    double bulletsBoxes = 0;
    int medKit = 0; //no medkit to start
    int wagonPart = 0;//no wagon to start
};

#endif