
// how the program works

#include "RPS.h"

//random number generator
Computer::Computer() {
    std::random_device rd;
    rng.seed(rd());
}
std::string Computer::getChoice() {
    int val = dist(rng);
    if (val == 1) return "rock";
    if (val == 2) return "paper";
    return "scissors";
}

 // Player method code
 std::string Player::getChoice() {
    std::string choice;
    std::cout << "Choose rock, paper, scissors, or quit:";
    std::cin >> choice;

    while (choice != "rock" && choice != "paper" 
        && choice != "scissors" && choice != "quit"){
        std::cout << "Invalid Choice. Please enter rock , paper, scissors or quit:";
        std::cin >> choice;
        }
      
 
return choice;
    }

// Scoreboard
Scoreboard::Scoreboard(): playerScore(0), computerScore(0), ties(0){}

void Scoreboard:: addPlayerWin(){ playerScore++;}
void Scoreboard:: addComputerWin(){computerScore++;}
void Scoreboard:: addTie() {ties++;}