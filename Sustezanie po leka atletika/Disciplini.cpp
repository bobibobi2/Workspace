/*
 * Disciplini.cpp
 *
 *  Created on: May 5, 2017
 *      Author: Puzz
 */

#include "Disciplini.h"
#include <iostream>
#include <string>
using namespace std;

const string& Disciplini::getDisc() const {
	return disc;
}

Disciplini::Disciplini(string disc, BestA& worldrecord, BestA& championshiprecor):worldrecord(worldrecord),championshiprecor(championshiprecor) {
	setDisc(disc);

}

void Disciplini::Printinfo() {
	cout<<"  "<<getDisc()<<"  ";
	worldrecord.Printinfo();
	championshiprecor.Printinfo();

}

void Disciplini::setDisc(const string& disc) {
	this->disc = disc;
}

Disciplini::~Disciplini() {
	// TODO Auto-generated destructor stub
}

