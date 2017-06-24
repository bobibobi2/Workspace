/*
 * Payment.cpp
 *
 *  Created on: May 2, 2017
 *      Author: Puzz
 */

#include "Payment.h"
#include <string>
#include <iostream>
using namespace std;


int Payment::getDds() const {
	return dds;
}

void Payment::setDds(int dds) {
	this->dds = dds;
}

int Payment::getTip() const {
	return tip;
}

void Payment::setTip(int tip) {
	this->tip = tip;
}

int Payment::getTravel() const {
	return travel;
}

void Payment::setTravel(int travel) {
	this->travel = travel;
}

Payment::Payment(int tip, int travel, int dds) {
	setTip(tip);
	setTravel(travel);
	setDds(dds);

}

void Payment::Print() {
	cout<<"  "<<getTip()<<"  "<<getTravel()<<"  "<<getDds()<<"  "<<endl;
}

Payment::~Payment() {
	// TODO Auto-generated destructor stub
}

