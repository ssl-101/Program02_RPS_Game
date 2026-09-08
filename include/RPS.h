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
      Computer();
      std::string getChoice(); // converts 1-3 to rock, paper , scissors.
};

class Player {
public:
      std::string getChoice(); // returns typed string
};

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
    void displayScore() const;

      
};
class GameFlow {
private:
   Player player;
   Computer computer;
   Scoreboard scoreboard;

   void gameRound(const std::string& playerChoice, const std::string& gameChice);


   start()
}