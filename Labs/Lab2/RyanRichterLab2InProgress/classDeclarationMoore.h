#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include <sstream>

using namespace std;


class itemInfo
{
public:
	int getID(int index) {
		return id[index];
	}

	void setID(int i, int index) {
		id[index] = i;
	}

	int getUnits(int index) {
		return units[index];
	}

	void setUnits(int u, int index) {
		units[index] = u;
	}

	double getPrices(int index) {
		return prices[index];
	}

	void setPrices(double p, int index) {
		prices[index] = p;
	}

	string getDescriptions(int index) {
		return descriptions[index];
	}

	void setDescriptions(string d, int index) {
		descriptions[index] = d;
	}

	bool getExempt(int index) {
		return taxExempt[index];
	}

	void setExempt(bool t, int index) {
		taxExempt[index] = t;
	}
	double calcSales(const int units[], const double prices[], int num) {
		double sales[NUM_PRODS];
		//for (int index = 0; index < num; index++) {   ////May or may not be needed depending on how array/variable is called
		sales[num] = units[num] * prices[num];
		//}
		return sales[num];
	}

private:
	int id[NUM_PRODS];
	int units[NUM_PRODS];
	double prices[NUM_PRODS];
	string descriptions[NUM_PRODS];
	bool taxExempt[NUM_PRODS];
};