// CS1300 Fall 2020
// Author: Justin Lee
// Recitation: 328 – Favorite TA
// Project 3

#include "driver.h"
#include "event.h"
#include "statusUpdate.h"
#include "theStore.h"
#include <iostream>
#include <string>

using namespace std;


int main()
{
    driver driverNewGame; //intiliazes classes
    store storeCurrent;
    statusUpdate Status;
    event event1;
    driverNewGame.printIntro(); //instructions
    driverNewGame.setMainName(); //main user name
    driverNewGame.setCompanions(); //4 compananions array
    storeCurrent.displayInstructions(); //how to play
    storeCurrent.storeLoop(); //loops through purchases in store
    driverNewGame.chooseDate(); //lets user choose date
    while(true)
    {
        int option;
        cout << "1. Rest" << endl;
        cout << "2. Continue on Trail" << endl;
        cout << "3. Hunt" << endl;
        cout << "4. Quit" << endl; //menu for each turn
        cin >> option;
        if(option == 1) //switch for each option
        {
            int newDays = Status.getRandomRange(1,3); //chooses how many new days are iterated
            driverNewGame.iterateDays(newDays); //iterates for random days
            int newFood = (newDays * 15); //spends food for each day rested
            storeCurrent.setFood(newFood); //deducts food from store
            Status.displayCurrentStatus(driverNewGame, storeCurrent); //status 
        }
        if(option == 2) //main function call to travel trail
        {
            if(driverNewGame.iterateDays(14) == false)
            {
                return 0; //if player goes past november 30th iteration returns false and ends game
            };
            Status.travelSomeMileage(); //iterates date and mileage
            int newFood = (14 * 15); //spends food for each two weeks
            storeCurrent.setFood(newFood); //deducts food from stores
            Status.displayCurrentStatus(driverNewGame, storeCurrent); //status 
        }
        if(option == 3)
        {
            int bullets = storeCurrent.getBullets(); //gets bullets from store
            event1.setBullets(bullets); //sets bullet data member for events
            driverNewGame.iterateDays(1); //iterate one day if user wants to hunt
            int totalFood = event1.hunt(bullets); //uses bullets input to adjust for hunting
            storeCurrent.setBullets(event1.getBullets()); //sets bullets in store depending on hunt
            if(totalFood >= 1000)
            {
                totalFood = 1000; //ensures user does not get more than 1000 bounds
                cout << "Some food was left behind. More than 1000 pounds caught.";
            }
            storeCurrent.addFood(totalFood);
            int optionFood;
            cout << "Would you like to eat:" << endl; //ends hunt with prompt
            cout << "1. Poorly, 2lbs of food per person" << endl;
            cout << "2. Moderately, 3lbs of food per person" << endl;
            cout << "3. Well, 5lbs of food per person" << endl;
            cin >> optionFood;
            if(optionFood == 1)
            {
                storeCurrent.setFood(10); //sets food for consumption
            }
            if(optionFood == 2)
            {
                storeCurrent.setFood(15);
            }
            if(optionFood == 3)
            {
                storeCurrent.setFood(25);
            }
            Status.displayCurrentStatus(driverNewGame, storeCurrent);
        }
        if(option == 4)
        {
            cout << "Game ended." << endl; //user wants to quit
            return 0;
        }
        int medkit = storeCurrent.getMedkit(); //creates variables for random events
        int oxen = (storeCurrent.getYokes() * 2);
        string newName = driverNewGame.getCompanions(2);
        int outcome = event1.misfortune(newName, medkit, oxen); //misfortune main file chooses between
        // sickness oxen or wheel breaking
        if(storeCurrent.getYokes() <= 0 || )
        {
            cout << "Game over." << endl; //if either of these are true game ends
            return 0;
        }
    }

    Status.saveFinalStats(driverNewGame, storeCurrent); //writes out to file for user stats
}

