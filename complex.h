/*
 * complex.h
 *
 *  Created on: Nov 13, 2018
 *      Author: 012159186
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



#endif /* COMPLEX_H_ */
