/*
 * complex.cpp
 *
 *  Created on: Nov 15, 2018
 *      Author: Danielle Shen
 */
#include <iostream>
#include "complex.h"

using namespace std;
Complex::Complex(): real(0), imaginary(0) {}

Complex::Complex(double r, double i) {
	real = r;
	imaginary = i;
}
Complex::Complex(double r) {
	real = r;
	imaginary = 0;
}
Complex operator+(const Complex &compa, const Complex &compb) {
	Complex c(compa.real + compb.real, compa.imaginary + compb.imaginary);
	return c;
}
Complex operator-(const Complex &compa, const Complex &compb) {
	Complex c(compa.real - compb.real, compa.imaginary - compb.imaginary);
	return c;
}
bool operator==(const Complex &compa, const Complex &compb) {
	if(compa.real == compb.real && compa.imaginary == compb.imaginary)
		return true;
	return false;
}
Complex operator*(const Complex &compa, const Complex &compb) {
	Complex c(compa.real*compb.real-compa.imaginary*compb.imaginary, compa.real*compb.imaginary+compa.imaginary*compb.real);
	return c;
}
ostream& operator<<(ostream& ost, const Complex &compb) {
	ost << compb.real;
	if(compb.imaginary >= 0) {
		ost << "+" << compb.imaginary << "i" << endl;
	} else
	{
		ost << compb.imaginary << "i" << endl;
	}
	return ost;
}
istream& operator>>(istream& ost, const Complex &compb) {
	cout << "input real pls: ";
	ost >> compb.real;
	cout << "input imaginary pls: ";
	ost >> compb.imaginary;
	return ost;

}


