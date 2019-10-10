#include <iostream>
#include <string>

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

        virtual void Play(){
            cout << "Roll the dice." << endl;
        }

        void Winner(){
            cout << "Dancing time." << endl;
        }

};

class videoGame : public baseGame{
    protected:
        string age;
        string ageInput;
    public:
        void getAge(){
            cout << "What is your age? ";
            cin >> ageInput;
            cout << endl;
        }
        void setAge(){
            age = ageInput;
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