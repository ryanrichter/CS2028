#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

int main() {
    string fileName;
    cout << "Please enter the name of the file you would like to open: ";
    cin >> fileName;
    cout << endl;

    ifstream file;
    file.open(fileName.c_str());
    
    while(!file){
        cout << "No file of that name found. Enter another: ";
        cin >> fileName;
        file.open(fileName.c_str());
    }

    string line;
    while(!file.eof()){
        getline(file, line);
        cout << line << endl;
    }

    file.close();
}