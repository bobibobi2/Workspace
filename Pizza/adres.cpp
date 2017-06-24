/*
 * adres.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: Puzz
 */

#include "adres.h"
#include <string>
using namespace std;



int adres::getId() const {
	return id;
}

void adres::setId(int id) {
	this->id = id;
}

const string& adres::getStreet() const {
	return street;
}

void adres::setStreet(const string& street) {
	this->street = street;
}

int adres::getStreetnumber() const {
	return streetnumber;
}

adres::adres(string street, int streetnumber, int id) {
	set
}

void adres::setStreetnumber(int streetnumber) {
	this->streetnumber = streetnumber;
}

adres::~adres() {
	// TODO Auto-generated destructor stub
}

