/*
 * pacient.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */
#include <iostream>
#include "pacient.h"
#include <string>
using namespace std;



int pacient::getAge() const {
	return age;
}

void pacient::setAge(int age) {
	this->age = age;
}

const string& pacient::getGender() const {
	return gender;
}

void pacient::setGender(const string& gender) {
	this->gender = gender;
}

const string& pacient::getName() const {
	return name;
}

pacient::pacient(string name, int age, string gender) {
	setName(name);
	setAge(age);
	setGender(gender);
}

void pacient::setName(const string& name) {
	this->name = name;
}

pacient::~pacient() {
	// TODO Auto-generated destructor stub
}

