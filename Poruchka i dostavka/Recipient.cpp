/*
 * Recipient.cpp
 *
 *  Created on: May 2, 2017
 *      Author: Puzz
 */

#include "Recipient.h"
#include <iostream>
using namespace std;


const string& Recipient::getFirstname() const {
	return firstname;
}

void Recipient::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

const string& Recipient::getLastname() const {
	return lastname;
}

void Recipient::setLastname(const string& lastname) {
	this->lastname = lastname;
}

Recipient::Recipient(string firstname, string lastname, adres& adressss):adrr(adressss) {
	setFirstname(firstname);
	setLastname(lastname);

}

void Recipient::Print() {
	cout<<getFirstname()<<"  "<<getLastname()<<"  "<<endl;
}

Recipient::~Recipient() {
	// TODO Auto-generated destructor stub
}

