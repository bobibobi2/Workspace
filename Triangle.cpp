/*
 * Triangle.cpp
 *
 *  Created on: May 15, 2017
 *      Author: Puzz
 */

#include "Triangle.h"

Triangle::Triangle() {
setA(2);
	setB(1);
	setC(3);
	setH(5);

}

Triangle::Triangle(int a, int b, int c, int h) {

	setA(a);
	setB(b);
	setC(c);
	setH(h);
}

bool Triangle::operator ==(Triangle& r) {
	if(this->a == r.a && this->b == r.b && this->c == r.c && this->h == r.h)
			return true;

		return false;

}

bool Triangle::operator !=(Triangle& r) {
	if(this->a != r.a && this->b != r.b && this->c != r.c && this->h != r.h)
	return true;
return false;
}

Triangle::~Triangle() {
	// TODO Auto-generated destructor stub
}

int Triangle::getA() const {
	return a;
}

void Triangle::setA(int a) {
	this->a = a;
}

int Triangle::getB() const {
	return b;
}

void Triangle::setB(int b) {
	this->b = b;
}

int Triangle::getC() const {
	return c;
}

void Triangle::setC(int c) {
	this->c = c;
}

int Triangle::getH() const {
	return h;
}

void Triangle::setH(int h) {
	this->h = h;
}
istream & operator>>(istream& in, Triangle & object) {
	in.ignore(1);
	in >> object.a;
	in.ignore(1);
	in >> object.b;
	in.ignore(1);
	in >> object.c;
	in.ignore(1);
	in >> object.h;
	in.ignore(1);

	return in;
}

ostream& operator<<(ostream& out, const Triangle& object) {
	out << "{{" << object.getA() << "-" << object.getB() << "-" << object.getC() <<"-"<<object.getH()<<"}}";
	return out;
}
