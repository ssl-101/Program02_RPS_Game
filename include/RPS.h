//RPSGAME_H
#ifndef RPSGAME_H
#define RPSGAME_H

class Computer { 
    private:
      int choice;

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
    void addPlayerwin()
    
      
}