
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

void Scoreboard::displayScore() const{
    int totalRounds = playerScore + computerScore + ties;
    //displaying score board output
    std::cout << "\n=========================\n";
    std::cout << "\n       Game Results      \n";
    std::cout << "\n=========================\n";
    std::cout << "Total Rounds:"<< totalRounds <<"\n";
    std::cout << "Player Wins:"<< playerScore <<"\n";
    std::cout << "Computer Wins:"<< computerScore <<"\n";
    std::cout << "Ties:         "<< ties << "\n";
    std::cout << "===============================\n";

    if (playerScore > computerScore){
        std::cout << "GAME WINNER: You won the game!\n";
    }
    else if (computerScore > playerScore){
        std::cout << "GAME WINNER: Computer won the game!\n";
    }
    else {
        std::cout << "GAME WINNER: Tie! \n";
    }
    std::cout << "=====================================\n";
}

void GameFlow::start(){
    std::cout << "===================================\n";
    std::cout << "        Let's Play a Game:         \n";
    std::cout << "      Rock, Paper, Scissors !      \n";
    std::cout << "===================================\n";

    while (true) {
        std::string pChoice = player.getChoice();
        if (pChoice == "quit"){
            break;
        }
        std::string cChoice = computer.getChoice();
        gameRound(pChoice, cChoice);
    }
    scoreboard.displayScore();
}