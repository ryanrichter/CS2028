#include <iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(){
    real = 0.0;
    imag = 0.0;
}


Complex::Complex(double cartReal, double cartImag){
    real = cartReal;
    imag = cartImag;
}

void Complex::getReal(){
    cout << "Enter the real number you wish to use: ";
    cin >> real;
    cout << endl;
}

void Complex::getImag(){
    cout << "Enter the imaginary number you wish to use: ";
    cin >> imag;
    cout << endl;
}


void Complex::setReal(double realNumber){
    realNumber = real;
}
        
void Complex::setImag(double imagNumber){
    imagNumber = imag;
}

void Complex::printData(){
    cout << real << " + " << imag << "i" << endl;
}

void Complex::operator+(Complex const &obj) {
    real = real + obj.real;
    imag = imag + obj.imag;
}

void Complex::operator-(Complex const &obj){
    real = real - obj.real;
    imag = imag - obj.imag;
}

void Complex::operator*(Complex const &obj){
    real = real * obj.real;
    imag = imag * obj.imag;
}

void Complex::operator/(Complex const &obj){
    real = real / obj.real;
    imag = imag / obj.imag;
}

void Complex::operator==(Complex const &obj){
    bool result;
    if (real == real && imag == imag){
        result = true;
    }
    else{
        result = false;
    }
}
