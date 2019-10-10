#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <fstream>
#include <sstream>

using namespace std;

struct fileData{
    string name;
    string fullAuthor;
    string authorFirst;
    string authorLast;
    int wordCount;
    int lineCount;
} mainFile;

int main() {
    cout << "Please enter the name of the file you would like to open: ";
    cin >> mainFile.name;
    cout << endl;

    ifstream file;
    file.open(mainFile.name.c_str());
    
    while(!file){
        cout << "No file of that name found. Enter another: ";
        cin >> mainFile.name;
        file.open(mainFile.name.c_str());
    }

    char word[30];
    int numWords = 0;
    int numLines = 0;
    string line;

    while(getline(file,line)){
        ++numLines;
        stringstream lineStream(line);
        while(getline(lineStream, line, ' ')){
            ++numWords;
        }
    }
    file.close();

    cout << "number of words in file: " << numWords << endl;
    cout << "number of lines in file: " << numLines << endl;
    

    char input;
    cout << "Would you like to see the letter frequency? (y/n): ";
    cin >> input;
    cout << endl;


    if (input == 'y'){
        int freq[128];
        char character;
        int numChars = 0;

        file.open(mainFile.name.c_str());
        while (file >> character){
            numChars++;
        }
        cout << numChars;
        file.close();

        for (int k = 0; k < 128; k++){
            freq[k] = 0;
        }

        file.open(mainFile.name.c_str());
        character = file.get();
        while (character != EOF){
            character = toupper(character);
            freq[character]++;
            character = file.get();
        }

        cout << "Letter Frequencies" << endl;
        for (char ch = 'A'; ch <= 'Z'; ch++){
            cout << ch << ": " << freq[ch] << endl;
        }
    }

    return 0;

}

