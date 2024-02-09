#include "game.h"
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

Game::Game(int max) {
    srand(time(NULL));
    playerGuess = 0;
    randomNumber = rand() % max + 1;
    numOfGuesses = 0;
    maxNumber = max;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<maxNumber<<" as a maximum value"<<endl;
}
Game::~Game() {
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}
void Game::play() {
    do {
    cout<<"Give your guess between 1-"<<maxNumber<<endl;
    cin>>playerGuess;
    if(playerGuess == randomNumber) {
        cout<<"Your guess is right = "<<playerGuess<<endl;
        numOfGuesses++;
        printGameResult();
    } else if(playerGuess < randomNumber) {
        cout<<"Your guess is too small"<<endl;
        numOfGuesses++;
    } else if(playerGuess > randomNumber) {
        cout<<"Your guess is too big"<<endl;
        numOfGuesses++;
    }
    }
    while(playerGuess != randomNumber);

}
void Game::printGameResult() {
    cout<<"You guessed the right answer = "<<playerGuess<<" with "<<numOfGuesses<<" guesses"<<endl;
}
