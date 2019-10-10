#include <iostream>
#include <string>
#include <exception>

using namespace std;

class baseGame{
    protected:
        string player1;
        string playerInput1;
        string player2;
        string playerInput2;
    public:
        void getPlayer1(){
            cout << "What is player 1's name? ";
            cin >> playerInput1;
            cout << endl;
        }
        void getPlayer2(){
            cout << "What is player 2's name? ";
            cin >> playerInput2;
            cout << endl;
        }
        void setPlayer1(){
            player1 = playerInput1;
        }
        void setPlayer2(){
            player2 = playerInput2;
        }


        baseGame(){
            player1 = "Bob";
            player2 = "Jim";
        }

        baseGame(string name1, string name2){
            player1 = name1;
            player2 = name2;
        }

        virtual void Play(){
            cout << "Let's Play" << endl;
        }

        void Winner(){
            cout << "Not Yet" << endl;
        }
};

class boardGame : public baseGame{
    protected:
        string gameName;
        string nameInput;
    public:
        void getName(){
            cout << "What is the name of the game? ";
            cin >> nameInput;
            cout << endl;
        }
        void setName(){
            gameName = nameInput;
        }
        void returnName(){
            cout << nameInput;
        }

        virtual void Play(){
            cout << "Roll the dice." << endl;
        }

        void Winner(){
            cout << "Dancing time." << endl;
        }

};

class videoGame : public baseGame{
    protected:
        string gameName;
        string nameInput;
    public:
        void getName(){
            cout << "What is the name of the game? ";
            cin >> nameInput;
            cout << endl;
        }
        void setName(){
            gameName = nameInput;
        }
        void returnName(){
            cout << nameInput;
        }

        virtual void Play(){
            cout << "Mash the buttons." << endl;
        }

        void Winner(){
            cout << "Winner music" << endl;
        }
};


void callGame(baseGame &game){  // Function for calling play and winner functions
    game.Play();
    game.Winner();
}

//
// BEGIN LAB 5 CODE
//

class fullShelf : public exception{
    virtual const char* what() const throw()
    {
        return "Shelf is full";
    }
}fullex;

class emptyShelf : public exception{
    virtual const char* what() const throw()
    {
        return "Shelf is empty";
    }
}emptyex;

const int shelfCap = 10;

class boardGameShelf : public boardGame {
    public:
        boardGame gameShelf[shelfCap];
        int numGames;

        boardGameShelf(){
            numGames = 0;
        }
        boardGameShelf(int i){
            numGames = i;
        }

        int getNumGames(){
            return numGames;
        }
        
        void addGame(boardGame i){
            if (numGames == shelfCap){}
            else {
                numGames += 1;
                gameShelf[numGames-1] = i;
                cout << "Game added to the shelf." << endl << endl;
            }
        }

        void removeGame(){
            if (numGames == 0){}
            else {
                gameShelf[numGames-1].returnName();
                numGames -= 1;
                cout << " was removed from the shelf" << endl << endl;
            }
        }

        void checkGames(){
            cout << "Number of games on the shelf: " << numGames << endl;
        }
};

class EntertainmentCollection {
    public:
        videoGame gameShelf[shelfCap];
        int numGames;

        EntertainmentCollection(){
            numGames = 0;
        }
        EntertainmentCollection(int i){
            numGames = i;
        }

        int getNumGames(){
            return numGames;
        }
        
        void addGame(videoGame i){
            if (numGames == shelfCap){
            }
            else {
                numGames += 1;
                gameShelf[numGames-1] = i;
                cout << "Game added to the shelf." << endl << endl;
            }
        }

        void removeGame(){
            if (numGames == 0){
            }
            else {
                gameShelf[numGames-1].returnName();
                numGames -= 1;
                cout << " was removed from the shelf" << endl << endl;
            }
        }

        void checkGames(){
            cout << "Number of games on the shelf: " << numGames << endl;
        }
};

