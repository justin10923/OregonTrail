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

int event::hunt(int bullets) //drives all hunting functions for hunt option in driver
{
    int value, guess;
    int random = getRandom(1,10);
    int total = 0;
    if(catchBear() == true)
    {
        cout << "You got Lucky, you encountered a bear." << endl;
        cout << "Enter 1 to hunt, 0 to pass" << endl;
        cin >> value;
        if(value == 1)
        {
            if(bullets < 10)
            {
                cout << "Hunt was unsuccessful" << endl;
                
            }
            cout << "Guess a number beteween 1 and 10" << endl;
            cin >> guess;
            if(guess == random)
            {
                cout << "Hunt was successful. 200 lbs of food added" << endl;
                total = total + 200;
                bulletAmmend = bulletAmmend - 10;
            }
            else
            {
                cout << "Guess a number beteween 1 and 10" << endl;
                cin >> guess;
                if(guess == random)
                {
                    cout << "Hunt was successful. 200 lbs of food added" << endl;
                    total = total + 200;
                    bulletAmmend = bulletAmmend - 10;
                }
                else
                {
                    cout << "Guess a number beteween 1 and 10" << endl;
                    cin >> guess;
                    if(guess == random)
                    {
                        cout << "Hunt was successful. 200 lbs of food added" << endl;
                        total = total + 200;
                        bulletAmmend = bulletAmmend - 10;
                    }
                    else
                    {
                        cout << "Hunt was not successful" << endl;
                    }
                    
                }
            }
        }
    }

    if(catchDeer() == true)
    {
        cout << "You got Lucky, you encountered a deer." << endl;
        cout << "Enter 1 to hunt, 0 to pass" << endl;
        cin >> value;
        if(value == 1)
        {
            if(bullets < 10)
            {
                cout << "Hunt was unsuccessful" << endl;
            }
            cout << "Guess a number beteween 1 and 10" << endl;
            cin >> guess;
            if(guess == random)
            {
                cout << "Hunt was successful. 60 lbs of food added" << endl;
                total = total + 60;
                bulletAmmend = bulletAmmend - 5;
            }
            else
            {
                cout << "Guess a number beteween 1 and 10" << endl;
                cin >> guess;
                if(guess == random)
                {
                    cout << "Hunt was successful. 60 lbs of food added" << endl;
                    total = total + 60;
                    bulletAmmend = bulletAmmend - 5;
                }
                else
                {
                    cout << "Guess a number beteween 1 and 10" << endl;
                    cin >> guess;
                    if(guess == random)
                    {
                        cout << "Hunt was successful. 60 lbs of food added" << endl;
                        total = total + 60;
                        bulletAmmend = bulletAmmend - 5;
                    }
                    else
                    {
                        cout << "Hunt was not successful" << endl;
                    }
                    
                }
            }
        }
    }
    if(catchRabbit() == true)
    {
        cout << "You got Lucky, you encountered a rabbit." << endl;
        cout << "Enter 1 to hunt, 0 to pass" << endl;
        cin >> value;
        if(value == 1)
        {
            if(bullets < 10)
            {
                cout << "Hunt was unsuccessful" << endl;
            }
            cout << "Guess a number beteween 1 and 10" << endl;
            cin >> guess;
            if(guess == random)
            {
                cout << "Hunt was successful. 5 lbs of food added" << endl;
                total = total + 5;
                bulletAmmend = bulletAmmend - 10;
            }
            else
            {
                cout << "Guess a number beteween 1 and 10" << endl;
                cin >> guess;
                if(guess == random)
                {
                    cout << "Hunt was successful. 5 lbs of food added" << endl;
                    total = total + 5;
                    bulletAmmend = bulletAmmend - 10;
                }
                else
                {
                    cout << "Guess a number beteween 1 and 10" << endl;
                    cin >> guess;
                    if(guess == random)
                    {
                        cout << "Hunt was successful. 5 lbs of food added" << endl;
                        total = total + 5;
                        bulletAmmend = bulletAmmend - 10;
                    }
                    else
                    {
                        cout << "Hunt was not successful" << endl;
                    }
                    
                }
            }
        }
    }
    if(catchFox() == true)
    {
        cout << "You got Lucky, you encountered a Fox." << endl;
        cout << "Enter 1 to hunt, 0 to pass" << endl;
        cin >> value;
        if(value == 1)
        {
            if(bullets < 10)
            {
                cout << "Hunt was unsuccessful" << endl;
            }
            cout << "Guess a number beteween 1 and 10" << endl;
            cin >> guess;
            if(guess == random)
            {
                cout << "Hunt was successful. 10 lbs of food added" << endl;
                total = total + 10;
                bulletAmmend = bulletAmmend - 8;
            }
            else
            {
                cout << "Guess a number beteween 1 and 10" << endl;
                cin >> guess;
                if(guess == random)
                {
                    cout << "Hunt was successful. 10 lbs of food added" << endl;
                    total = total + 10;
                    bulletAmmend = bulletAmmend - 8;
                }
                else
                {
                    cout << "Guess a number beteween 1 and 10" << endl;
                    cin >> guess;
                    if(guess == random)
                    {
                        cout << "Hunt was successful. 10 lbs of food added" << endl;
                        total = total + 10;
                        bulletAmmend = bulletAmmend - 8;
                    }
                    else
                    {
                        cout << "Hunt was not successful" << endl;
                    }
                    
                }
            }
        }
    }
    if(catchMoose() == true)
    {
        cout << "You got Lucky, you encountered a Moose." << endl;
        cout << "Enter 1 to hunt, 0 to pass" << endl;
        cin >> value;
        if(value == 1)
        {
            if(bullets < 10)
            {
                cout << "Hunt was unsuccessful" << endl;
            }
            cout << "Guess a number beteween 1 and 10" << endl;
            cin >> guess;
            if(guess == random)
            {
                cout << "Hunt was successful. 500 lbs of food added" << endl;
                total = total + 500;
                bulletAmmend = bulletAmmend - 12;
            }
            else
            {
                cout << "Guess a number beteween 1 and 10" << endl;
                cin >> guess;
                if(guess == random)
                {
                    cout << "Hunt was successful. 500 lbs of food added" << endl;
                    total = total + 500;
                    bulletAmmend = bulletAmmend - 12;
                }
                else
                {
                    cout << "Guess a number beteween 1 and 10" << endl;
                    cin >> guess;
                    if(guess == random)
                    {
                        cout << "Hunt was successful. 500 lbs of food added" << endl;
                        total = total + 500;
                        bulletAmmend = bulletAmmend - 12;
                    }
                    else
                    {
                        cout << "Hunt was not successful" << endl;
                    }
                    
                }
            }
        }
    }
    return total;
}

int event::getRandom(int min, int max) //randomizer for hunting
{
    return (rand() % (max - min + 1)) + min;
}

bool event::catchBear() //randomizes bear encounter
{
    int prob = getRandom(0,100);
    if(prob <= 7)
    {
        return true;
    }
    return false;
}

bool event::catchDeer() //randomizes deer encounter
{
    int prob = getRandom(0,100);
    if(prob <= 15)
    {
        return true;
    }
    return false;
}

bool event::catchFox() //randomizes fox encounter
{
    int prob = getRandom(0,100);
    if(prob <= 25)
    {
        return true;
    }
    return false;
}

bool event::catchMoose() //randomizes moose encounter
{
    int prob = getRandom(0,100);
    if(prob <= 5)
    {
        return true;
    }
    return false;
}

bool event::catchRabbit() //randomizes rabbit encounter
{
    int prob = getRandom(0,100);
    if(prob <= 50)
    {
        return true;
    }
    return false;
}

void event::setBullets(int bullets) //ammends bullets for event class
{
    bulletAmmend = bullets;
}

int event::getBullets()
{
    return bulletAmmend;
}


int event::misfortune(string name, int medkit, int oxen) //main fortune file
//INCOMPLETE
{
    int prob = getRandom(1,100);
    if(prob <= 40)
    {
        int prob2 = getRandom(1,3);
        if(prob2 == 1)
        {
            int Death = misfortuneSickness(name, medkit);
            if(Death == 1)
            {
                return 0;
            }
        }
        if(prob2 == 1)
        {
            return 0;
        }
        return 0;
    }
    return 0;
}

bool event::misfortuneSickness(string name, int medkit) //misfortune for sickness
{
    string sickness1;
    int sickness = getRandom(1,6); //randomizes title
    switch(sickness)
    {
        case 1: sickness1 = "typhoid"; break;
        case 2: sickness1 = "chlorea"; break;
        case 3: sickness1 = "diarrhea"; break;
        case 4: sickness1 = "measles"; break;
        case 5: sickness1 = "dysentry"; break;
        case 6: sickness1 = "fever"; break;
    }
    if(medkit == 1)
    {
        int prob = getRandom(1,2);
        cout << "Oh no! " << name << " has the " << sickness << endl;
        if(prob == 1)
        {
        cout << name << " has died. No more medkit." << endl; //randomizes death of you or companion
        return true;
        }
        if(prob == 2)
        {
        cout << name << " has survived. No more medkit." << endl;
        return true;
        }
    }
    else
    {
        int option;
        cout << "You have no medkit. " << endl;
        cout << "1. Rest" << endl;
        cout << "2. Press on" << endl;
        cin >> option; //option if there is no medkit
        if(option == 1)
        {
            int prob2 = getRandom(1,10);
            if(prob2 <= 3)
            {
                cout << name << " Died anyway." << endl;
                return false;
            }
            return false;
        }
        if(option == 2)
        {
            int prob3 = getRandom(1,10);
            if(prob3 <= 7)
            {
                cout << name << " has died." << endl;
                return false;
            }
            return false;
        }

    }
    return false;
}


