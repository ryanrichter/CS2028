#include <iostream>

using namespace std;

class Complex {
    private:
        double imag;
        double real;

    public:
        Complex();
        Complex(double cartReal, double cartImag);
        Complex(double polarReal, double polarImag, double dummy);        

        void getReal();

        void getImag();

        void setReal(double real);
        
        void setImag(double imag);

        void printData();

        void operator+(Complex const &obj);

        void operator-(Complex const &obj);

        void operator*(Complex const &obj);

        void operator/(Complex const &obj);

        void operator==(Complex const &obj);


};