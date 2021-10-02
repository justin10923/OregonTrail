// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 2- Problem #1

#include "statusUpdate.h"
#include "driver.h"
#include "theStore.h"
#include "event.h"
#include <iostream>
#include <string>

using namespace std;

//Class implementation for all member functions and data members

void store::storeLoop() //loop through store
{
    int option;
    while(true)
    {
        cout << "Choose Something to Buy:" << endl;
        cout << "1. Oxen" << endl;
        cout << "2. Food" << endl;
        cout << "3. Bullets" << endl;
        cout << "4. Miscellaneous Supplies" << endl;
        cout << "5. Leave Store" << endl;
        cin >> option; //first option
        switch(option)
        {
            case 1:
            {
                double valueYokes;
                cout << "There are 2 oxen in a yoke and each yoke is $40" << endl;
                cout << "You can spend between $100 and $200 on oxen" << endl;
                cout << "You may purchase 3 to 5 yokes" << endl;
                cout << "Enter the amount of yokes to be purchased" << endl; //recommendation and price
                cin >> valueYokes;
                if(buyOxen(valueYokes) == false) //ensures yokes are in range
                {
                    cout << "Your entry of yokes was out of range or you purchased too many yokes" << endl;
                    break;
                };
                printBill(); //print bill
                break;
            }
            case 2:
            {
                double poundFood;
                cout << "The store owner recommends the player(s) should purchase at least " << endl;
                cout << "200 lbs. of food per person, at 50 cents per pound." << endl;
                cout << "How many pounds of food would you like to purchae? (50 cents per pound)" << endl;
                cin >> poundFood;//recommendation and price
                if(buyFood(poundFood) == false)
                {
                    cout << "Not enough money for this purchase." << endl; //in range?
                    break;
                }
                printBill();
                break;
            }
            case 3:
            {
                double boxesBullets;
                cout << "A box of 20 bullets costs $2. You will need the bullets for hunting along the way. " << endl;
                cout << "How many boxes of bullets would you like to purchase?" << endl;//recommendation and price
                cin >> boxesBullets;
                if(buyBullets(boxesBullets) == false)
                {
                    cout << "Not enough money for this purchase." << endl; //in range?
                    break;
                }
                printBill();
                break;
            }
            case 4:
            {
                int option1;
                cout << "1. Wagon Part ($20 and used to fix broken wagon)" << endl;
                cout << "2. Medical Aid kit ($25)" << endl;//recommendation and price
                cin >> option1;
                if(option1 == 1)
                {
                    if(buyWagonPart() == false)
                    {
                        cout << "Not enough money for this purchase." << endl;
                        break;
                    }
                    printBill();
                    break;
                }
                if(option1 == 2)
                {
                    if(buyMedKit() == false)
                    {
                        cout << "Not enough money for this purchase." << endl;
                        break;
                    }
                    printBill();
                    break;
                }
                else
                {
                    cout << "choice not valid" << endl;
                    break;
                }
                
                break;
            }
            case 5:
            {
                return;
            }
            default:
            {
                cout << "Choice was not valid" << endl;
                break;
            }
        }
    }
}

void store::displayInstructions() //instructions shows at beginning
{
    cout << "YOU HAD SAVED $1600 TO SPEND FOR THE TRIP, AND YOU HAVE A WAGON." << endl;
    cout << "YOU WILL NEED TO SPEND THE REST OF YOUR MONEY ON THE FOLLOWING ITEMS:" << endl;
    cout << "- OXEN. YOU CAN SPEND $100-$200 ON YOUR TEAM. THE MORE YOU SPEND," << endl;
    cout << "THE FASTER YOU'LL GO BECAUSE YOU'LL HAVE BETTER ANIMALS. " << endl;
    cout << "- FOOD. THE MORE YOU HAVE, THE LESS CHANCE THERE IS OF GETTING SICK ." << endl;
    cout << "- AMMUNITION. YOU WILL NEED BULLETS FOR ATTACKS BY ANIMALS AND BANDITS, AND FOR HUNTING FOOD." << endl;
    cout << "- MISCELLANEOUS SUPPLIES. THIS INCLUDES MEDICINE AND OTHER THINGS"; 
    cout << "YOU WILL NEED FOR SICKNESS AND EMERGENCY REPAIRS." << endl;

    cout << "YOU CAN SPEND ALL YOUR MONEY BEFORE YOU START YOUR TRIP, OR YOU CAN SAVE SOME OF YOUR CASH" << endl;
    cout << "TO SPEND AT FORTS ALONG THE WAY WHEN YOU RUN LOW. HOWEVER, ITEMS COST MORE AT THE FORTS." << endl; 
    cout << "YOU CAN ALSO GO HUNTING ALONG THE WAY TO GET MORE FOOD." << endl;
}

double store::getTotalMoney()
{
    return cashValue;
}

bool store::buyOxen(double oxenCount) //buys oxen for store loop function
{
    if(oxenCount < 3 || oxenCount > 5)//range limiter
    {
        return false;
    }
    if((cashValue - (oxenCount*40)) <= 0)
    {
        return false;
    }
    cashValue = cashValue - (oxenCount*40.0);//deduction of cash
    yokes = oxenCount;//ammend data member
    return true;
}

bool store::buyFood(double foodCount) //buys food
{
    if((cashValue - (foodCount*.5)) <= 0)
    {
        return false;
    }
    foodPounds = foodCount;//ammend data member
    cashValue = cashValue - (foodCount*.5);//deduction of cash
    return true;
}

bool store::buyBullets(double bulletCount)
{
    if((cashValue - (bulletCount*2)) <= 0)//makes sure more money is not spent
    {
        return false;
    }
    bulletsBoxes = bulletCount;
    cashValue = cashValue - (bulletCount*2);
    return true;
}

bool store::buyMedKit() //one medkit can be bought
{
    if((cashValue - 20) <= 0)
    {
        return false;
    }
    cashValue = (cashValue-20);
    medKit++;
    return true;
}

bool store::buyWagonPart()
{
    if((cashValue - 25) <= 0)
    {
        return false;
    }
    cashValue = (cashValue-25);
    wagonPart++;
    return true;
}

double store::getYokes()//returns yokes of oxenn
{
    return yokes;
}

double store::getBullets() //returns boxes of bullets
{
    return bulletsBoxes;
}

void store::setFood(int food)
{
    foodPounds = foodPounds - food;
}

void store::printBill() //bill finds and couts total while giving amount left to spend
{
    double total = (yokes*40) + (foodPounds*.5) + (bulletsBoxes*2) + (wagonPart*20) + (medKit*25);
    cout << "1. Yokes " << "$" << (yokes*40.0) << endl;
    cout << "2. Food " << "$" << (foodPounds*.5) << endl;
    cout << "3. Boxes of Bullets " << "$" << (bulletsBoxes*2) << endl;
    cout << "4. Wagon Part " << "$" << (wagonPart*20) << endl;
    cout << "5. MedKit " << "$" << (medKit*25) << endl;
    cout << "Total Bill: " << "$" << total << endl;
    cout << "Amount left to spend: $" << getTotalMoney() << endl;
    cout << "Started with: $1600" << endl;
    cout << endl;
}

void store::addFood(int food) //adds more food for hunting
{
    foodPounds = foodPounds + food;
}

void store::setBullets(int bullets) //if bullets are used for hunting
{
    bulletsBoxes = bullets;
}

int store::getMedkit() //if user has sickness misfortune
{
    return medKit;
}

void store::setMedkit(int med) //if medkit is used during sickness
{
    medKit = med;
}



