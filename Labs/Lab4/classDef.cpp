#include <iostream>
#include <string>
#include "classDec.h"

using namespace std;

void baseGame::getPlayer1(){
    cout << "What is player 1's name? ";
    cin >> playerInput1;
    cout << endl;
}
void baseGame::getPlayer2(){
    cout << "What is player 2's name? ";
    cin >> playerInput2;
    cout << endl;
}
void baseGame::setPlayer1(){
    player1 = playerInput1;
}
void baseGame::setPlayer2(){
    player2 = playerInput2;
}

baseGame::baseGame(){
    player1 = "Bob";
    player2 = "Jim";
}

baseGame::baseGame(string name1, string name2){
    player1 = name1;
    player2 = name2;
}

void baseGame::Play(){
    cout << "Let's Play" << endl;
}

void baseGame::Winner(){
    cout << "Not Yet" << endl;
}





void boardGame::getName(){
    cout << "What is the name of the game? ";
    cin >> nameInput;
    cout << endl;
}
void boardGame::setName(){
    gameName = nameInput;
}

void boardGame::Play(){
    cout << "Roll the dice." << endl;
}

void boardGame::Winner(){
    cout << "Dancing time." << endl;
}




void videoGame::getAge(){
    cout << "What is your age? ";
    cin >> ageInput;
    cout << endl;
}
void videoGame::setAge(){
    age = ageInput;
}

void videoGame::Play(){
    cout << "Mash the buttons." << endl;
}

void videoGame::Winner(){
    cout << "Winner music" << endl;
}




void callGame(baseGame &game){  // Function for calling play and winner functions
    game.Play();
    game.Winner();
}
