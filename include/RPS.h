//RPSGAME_H
#ifndef RPSGAME_H
#define RPSGAME_H
#include <iostream>
#include <string>
#include <random> 

class Computer { 
    private:
      std::mt19937 rng;//random number generator
      std::uniform_int_distribution<int> dist;//generates 1,2,3

    public:
      void generateChoice(); // random generate choice
      int getChoice();
}

class Player {
private:
      int choice;

public:
      int getChoice(); //user inputs their choice
      // Rock(1), Paper(2), Scissors(3)
}

class Scoreboard {
private:
    int playerScore;
    int computerScore;
    int ties;

public:
    Scoreboard();
    void addPlayerwin();
    void addComputerwin();
    void addTie();
    void displayScore() ; const;

      
}