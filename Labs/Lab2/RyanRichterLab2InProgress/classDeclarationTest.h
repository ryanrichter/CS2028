#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

class itemInfo
{
    public:

    vector<int> id;
    vector<int> units;
    vector<double> price;
    vector<double> sales;
    std::string description;
    bool taxExempt;
};