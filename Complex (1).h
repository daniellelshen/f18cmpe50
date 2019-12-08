/*
 * complex.h
 *
 *  Created on: Nov 15, 2018
 *      Author: Danielle Shen
 *
 */

#ifndef COMPLEX_H_
#define COMPLEX_H_

#include <iostream>
using namespace std;

class Complex {
private:
	double real, imaginary;
public:
Complex(double real, double imaginary);
Complex(double real);
Complex();
friend bool operator==(const Complex &compa, const Complex &compb);
friend Complex operator+(const Complex &compa, const Complex &compb);
friend Complex operator-(const Complex &compa, const Complex &compb);
friend Complex operator*(const Complex &compa, const Complex &compb);
friend ostream& operator<<(ostream& ost, const Complex &compb);
friend istream&  operator>>(istream& ost, const Complex &compb);
};

const Complex i(0, 1);

#endif /* COMPLEX_H_ */
