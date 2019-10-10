#include <iostream>
#include <string>
#include "classDec.h"

using namespace std;

int main(){
    int input;
    
    int run = 1;
    while (run){  // While loop that is set to run while the user wants it to.
        cout << "Press 1 for an instance of game." << endl;       // Asking user for which instance to initiate
        cout << "Press 2 for an instance of board game." << endl;
        cout << "Press 3 for an instance of video game." << endl;
        cout << "Press 4 for an instance of a board game declared as a game." << endl;
        cout << "Press 5 for an instance of a video game declared as a game." << endl;
        cin >> input;

        switch(input)  // Switch case that determines which input the user requested
        {
            case 1:
                {
                    baseGame game;     // Case for a normal game, calls the get/set(s), play, winner, and the separate function created to test the output
                    game.getPlayer1();
                    game.setPlayer1();
                    game.getPlayer2();
                    game.setPlayer2();

                    game.Play();
                    game.Winner();

                    cout << endl << "Function Output: " << endl;
                    callGame(game);
                    cout << endl;
                }
                break;
            case 2:
                {
                    boardGame game;     // Case for a board game, calls the get/set(s), play, winner, and the separate function created to test the output
                    game.getName();
                    game.setName();

                    game.Play();
                    game.Winner();

                    cout << endl << "Function Output: " << endl;
                    callGame(game);
                    cout << endl;
                }
                break;
            case 3:
                {
                    videoGame game;     // Case for a video game, calls the get/set(s), play, winner, and the separate function created to test the output
                    game.getAge();
                    game.setAge();

                    game.Play();
                    game.Winner();

                    cout << endl << "Function Output: " << endl;
                    callGame(game);
                    cout << endl;
                }
                break;
            case 4:
                {
                    baseGame *game = new boardGame;     // Case for a board game declared as a normal game.
                    game->getPlayer1();  // Calls the get/set(s) of BOTH the normal and board game,
                    game->setPlayer1();  // play, winner, and the separate function created to test the output.
                    game->getPlayer2();
                    game->setPlayer2(); 

                    game->Play();
                    game->Winner();

                    cout << endl << "Function Output: " << endl;
                    callGame(*game);
                    cout << endl;

                }
                break;
            case 5:
                {
                    baseGame *game = new videoGame;                  // Case for a video game declared as a normal game.
                    game->getPlayer1();  // Calls the get/set(s) of BOTH the normal and video game,
                    game->setPlayer1();  // play, winner, and the separate function created to test the output.
                    game->getPlayer2();
                    game->setPlayer2(); 

                    game->Play();
                    game->Winner();

                    cout << endl << "Function Output: " << endl;
                    callGame(*game);
                    cout << endl;

                }
                break;
        }
        cout << "Do you want to continue? (1 for yes, 0 for no): "; // Asking the user if they wish to continue running the program.
        cin >> input;
        cout << endl;
        if (input == 1){
            run = 1;
        }
        else{
            run = 0;
        }
    }
    return 0;
}