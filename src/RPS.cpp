
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

