/*
 * Toools.cpp
 *
 *  Created on: May 16, 2017
 *      Author: Puzz
 */
#include "Toools.h"

double Toools::getCost() const
{
	return cost;
}

void Toools::setCost(double cost) {
	this->cost = cost;
}

const string& Toools::getName() const {
	return name;
}

void Toools::setName(const string& name) {
	this->name = name;
}

int Toools::getQuantity() const {
	return quantity;
}

void Toools::setQuantity(int quantity) {
	this->quantity = quantity;
}

int Toools::getToolNumber() const {
	return toolNumber;
}

void Toools::setToolNumber(int toolNumber) {
	this->toolNumber = toolNumber;
}
Toools::Toools(int toolNumber, string name, int quantity, double cost) {
	setToolNumber(toolNumber);
		setName(name);
		setQuantity(quantity);
		setCost(cost);
}


Toools::~Toools() {
	// TODO Auto-generated destructor stub
}
