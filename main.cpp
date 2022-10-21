/*
Jay Gadhia
Project - Rock_Paper_Scissor
Purpose - Game portrays repsentation of premitive game of chance between 3 options
Date - 10/06/2022
*/

#include <iostream>
#include <iomanip>
#include <string>
#include <stdio.h>
#include <cmath>
using namespace std;

int main(){
// Variables for Game
    unsigned
        gamePlayCount       = 0,
        tieCount            = 0,
        playerWinnerCount   = 0,
        computerWinnerCount = 0;
// Game Choices
    const unsigned short
        ROCK_WEAPON         = 1,
        PAPER_WEAPON        = 2,
        SCISSOR_WEAPON      = 3,
        END_GAME_CHOICE     = 4;
    
// get player choice
    unsigned short
        computerWeaponChoice,
    playerWeaponChoice;
    do{
        cout << "Please choose a weapon from the menu below: " << endl << endl;
        cout << "1. Rock"             << endl;
        cout << "2. Paper"            << endl;
        cout << "3. Scissor"          << endl;
        cout << "4. End Game" << endl << endl;
        cout << "Weapon Choice: "; cin >> playerWeaponChoice;
        
        if((1 <= playerWeaponChoice) && (playerWeaponChoice <= 3)){
            cout << "Player weapon is : ";
            switch(playerWeaponChoice){
                case ROCK_WEAPON: cout << "Rock";
                    break;
                case PAPER_WEAPON: cout << "Paper";
                    break;
                case SCISSOR_WEAPON: cout << "Scissor";
                    break;
                }
        }
        else if (playerWeaponChoice == END_GAME_CHOICE)
            break;
        
        else{
            cout << endl << "Invalid menu choice, please try again!" << endl << endl;
            cout << "Press endter key once or twice to continue..." << endl << endl;
            cin.ignore(); cin.get();
            continue;
        }
        gamePlayCount++;
        cout << endl << endl;
// Computer Random Generation
        srand(clock());
        computerWeaponChoice = (rand() % 3 + 1);
// Computer Weapon Choice
// Below Displays the Output based on player output and computer random output
        if ((1 <= computerWeaponChoice) && (computerWeaponChoice <= 3)){
            cout << "Computer weapon is: ";
            switch(computerWeaponChoice){
                case ROCK_WEAPON: cout << "Rock";
                    break;
                case PAPER_WEAPON: cout << "Paper";
                    break;
                case SCISSOR_WEAPON: cout << "Scissor";
                    break;
            }
            cout << endl << endl << endl;
        }
        if(computerWeaponChoice == playerWeaponChoice){
            cout << "It's a tie!" << endl << endl;
            tieCount++;
        }
        else{
            switch(computerWeaponChoice){
                case ROCK_WEAPON:
                    switch(playerWeaponChoice){
                        case PAPER_WEAPON:
                            cout << "Paper covers rock, Player Wins!" << endl << endl;
                            playerWinnerCount++;
                            break;
                        case SCISSOR_WEAPON:
                            cout << "Rock Smashes scissors, Computer Wins" << endl << endl;
                            computerWinnerCount++;
                            break;
                }
                    break;
                case PAPER_WEAPON:
                    switch(playerWeaponChoice){
                        case ROCK_WEAPON:
                            cout << "Paper covers rock, Computer Wins!" << endl << endl;
                            computerWinnerCount++;
                            break;
                        case SCISSOR_WEAPON:
                            cout << "Scissor cuts paper, Player Wins!" << endl << endl;
                            playerWinnerCount++;
                            break;
                        
                    }
                case SCISSOR_WEAPON:
                    switch(playerWeaponChoice){
                        case ROCK_WEAPON:
                            cout << "Rock smashes scissors, Player Wins!" << endl << endl;
                            playerWinnerCount++;
                            break;
                        case PAPER_WEAPON:
                            cout << "Scissors cuts paper, Computer Wins!" << endl << endl;
                            computerWinnerCount++;
                            break;
                    }
                    break;
            }
        }
    cout << "Number of Ties: " << tieCount << endl;
    cout << "Player Wins: " << playerWinnerCount << endl;
    cout << "Computer Wins: " << computerWinnerCount << endl;
        
    }while(true);
    
}
