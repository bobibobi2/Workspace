/*
 * Atleti.cpp
 *
 *  Created on: May 5, 2017
 *      Author: Puzz
 */

#include "Atleti.h"
#include <iostream>
using namespace std;


const string& Atleti::getFirstname() const {
	return firstname;
}

void Atleti::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

const string& Atleti::getLastname() const {
	return lastname;
}

void Atleti::setLastname(const string& lastname) {
	this->lastname = lastname;
}

const string& Atleti::getNationality() const {
	return nationality;
}

Atleti::Atleti(string firstname, string lastname, string nationality) {
	setFirstname(firstname);
	setLastname(lastname);
	setNationality(nationality);
}

void Atleti::Printinfo() {
	cout<<"  "<<getFirstname()<<" "<<getLastname()<<"  "<<getNationality()<<" "<<endl;
}

void Atleti::setNationality(const string& nationality) {
	this->nationality = nationality;
}

Atleti::~Atleti() {
	// TODO Auto-generated destructor stub
}

