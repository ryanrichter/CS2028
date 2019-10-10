#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;

class itemInfo
{
    public:

    int id;
    int units;
    double price;
    double sales;
    std::string description;
    bool taxExempt;
};
