/*
 * Student.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */

#include "Student.h"
#include <string>
#include "adress.h"
#include <iostream>
using namespace std;



Student::~Student() {
	// TODO Auto-generated destructor stub
}

const adress& Student::getAddres() const {
	return addres;
}

void Student::setAddres(const adress& addres) {
	this->addres = addres;
}

const string& Student::getName() const {
	return name;
}

void Student::setName(const string& name) {
	this->name = name;
}

const string& Student::getSpec() const {
	return spec;
}

void Student::setSpec(const string& spec) {
	this->spec = spec;
}

Student::Student(string name  , string spec , adress &addres)
:addres(addres)
{
	setName(name);
	setSpec(spec);

}

void Student::print() {
	cout<< getName()<<" "<<getSpec()<<" ";
addres.print();
}
