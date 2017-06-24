/*
 * doctor.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */

#include "doctor.h"
#include <string>
using namespace std;



const string& doctor::getName() const {
	return name;
}

void doctor::setName(const string& name) {
	this->name = name;
}

int doctor::getPatients() const {
	return patients;
}

void doctor::setPatients(int patients) {
	this->patients = patients;
}

const string& doctor::getSpec() const {
	return spec;
}

doctor::doctor(string name, string spec, int patients) {
	setName(name);
	setSpec(spec);
	setPatients(patients);
}

void doctor::setSpec(const string& spec) {
	this->spec = spec;
}

doctor::~doctor() {
	// TODO Auto-generated destructor stub
}

