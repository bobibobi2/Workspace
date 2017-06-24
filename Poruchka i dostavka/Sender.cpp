/*
 * Sender.cpp
 *
 *  Created on: May 2, 2017
 *      Author: Puzz
 */

#include "Sender.h"
#include <iostream>
using namespace std;

const adres& Sender::getDres() const {
	return dres;
}

void Sender::setDres(const adres& dres) {
	this->dres = dres;
}

const string& Sender::getFirstname() const {
	return firstname;
}

void Sender::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

const string& Sender::getLastname() const {
	return lastname;
}

void Sender::setLastname(const string& lastname) {
	this->lastname = lastname;
}

Sender::Sender(string firstname, string lastname, adres& adresss):dres(adresss) {
	setFirstname(firstname);
	setLastname(lastname);


}

void Sender::Print() {
	cout<<getFirstname()<<"  "<<getLastname()<<"  "<<"  "<<endl;
}



Sender::~Sender() {
	// TODO Auto-generated destructor stub
}

