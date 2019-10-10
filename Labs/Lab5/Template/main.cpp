#include <iostream>
#include "classDec.h"

using namespace std;

int main(){
    int input;
    int run = 1;
    int numGames;
    EntertainmentCollection <videoGame> gameShelf;
    while(run){
        cout << "Press 1 to add a video game to the shelf." << endl;
        cout << "Press 2 to remove a video game from the shelf." << endl;
        cout << "Press 3 to see how many video games are currently on the shelf." << endl;
        cout << "Press 4 to quit." << endl;
        cin >> input;
        cout << endl;

        switch(input){
            case 1:
                {
                    videoGame userGame;
                    userGame.getName();
                    gameShelf.addGame(userGame);
                    numGames = gameShelf.getNumGames();
                    if (numGames == 10){
                        try
                        {
                            throw fullex;
                        }
                        catch (exception& e)
                        {
                            cout << e.what() << endl;
                        }
                    }
                    break;
                }
            case 2:
                {
                    gameShelf.removeGame();
                    numGames = gameShelf.getNumGames();
                    if (numGames == 0){
                        try
                        {
                            throw emptyex;
                        }
                        catch (exception& e)
                        {
                            cout << e.what() << endl;
                        }
                    }
                    break;
                }
            case 3:
                {
                    gameShelf.checkGames();
                    break;
                }
            case 4:
                {
                    run = 0;
                    break;
                }
        }
    }
}