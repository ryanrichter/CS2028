#include <iostream>
#include <cstdlib>
#include "Complex.h"

using namespace std;

int main(){
    double realNumber1;
    double imagNumber1;
    double realNumber2;
    double imagNumber2;
    double scalarMult;
    double scalarDiv;
    char op;


    cout << "First real number: ";
    cin >> realNumber1;
    cout << endl;

    cout << "First imaginary number: ";
    cin >> imagNumber1;
    cout << endl;

    Complex First(realNumber1, imagNumber1);

    cout << "Your two equations: " << endl;
    cout << realNumber1 << " + " << imagNumber1 << "i" << endl;
   

    cout << "What would you like to do with them? (+, -, *, /, =): ";
    cin >> op;

    switch(op)
    {
        case '+':
            cout << "Second real number: ";
            cin >> realNumber2;
            cout << endl;

            cout << "Second imaginary number: ";
            cin >> imagNumber2;
            cout << endl;
            cout << realNumber2 << " + " << imagNumber2 << "i" << endl;
            Complex Second(realNumber2, imagNumber2);

            First + Second;
            First.printData();
           break;

        case '-':
            cout << "Second real number: ";
            cin >> realNumber2;
            cout << endl;

            cout << "Second imaginary number: ";
            cin >> imagNumber2;
            cout << endl;
            cout << realNumber2 << " + " << imagNumber2 << "i" << endl;
            Complex Second(realNumber2, imagNumber2);

            First - Second;
            First.printData();

            break;
        case '*':
            cout << "Scalar Multiple: ";
            cin >> scalarMult;
            cout << endl;

            cout << scalarMult << "(" << realNumber1 << " + " << imagNumber1 << "i)" << endl;
            Complex Second(scalarMult, scalarMult);

            realNumber1 = realNumber1 * scalarMult;
            imagNumber1 = imagNumber1 * scalarMult;
            First.printData();

            break;
        case '/':
            cout << "Scalar Divisor: ";
            cin >> scalarDiv;
            cout << endl;

            cout << "(" << realNumber1 << " + " << imagNumber1 << "i) / " << scalarDiv << endl;

            realNumber1 = realNumber1 / scalarDiv;
            imagNumber1 = imagNumber1 / scalarDiv;
            First.printData();

            break;
        case '=':
            cout << "Second real number: ";
            cin >> realNumber2;
            cout << endl;

            cout << "Second imaginary number: ";
            cin >> imagNumber2;
            cout << endl;
            cout << realNumber2 << " + " << imagNumber2 << "i" << endl;
            Complex Second(realNumber2, imagNumber2);

            First == Second;
            First.printData();

            break;
        default:
            cout << "Not a valid input" << endl;
    }
    
    return 0;
}