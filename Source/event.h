// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 3

#ifndef EVENT_H
#define EVENT_H
#include <string>
#include <iostream>



using namespace std;

//defines a class book

class event
{
    public:
    //setters
    bool misfortuneSickness(string name, int medkit);
    int misfortune(string name, int medkitm, int oxen);
    bool misfortuneOxen(int oxen);
    int hunt(int bullets);
    bool catchRabbit();
    bool catchFox();
    bool catchDeer();
    bool catchBear();
    bool catchMoose();
    void setBullets(int bullets);

    //getters

    int getRandom(int min, int max); //randomizer
    int getBullets();

    private:
    int bulletAmmend; //only used due to class errors with store bullets
};

#endif