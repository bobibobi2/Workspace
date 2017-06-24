/*
 * adress.cpp
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */

#include "adress.h"
#include <iostream>
using namespace std;


const string& adress::getDurjava() const {
	return durjava;
}

void adress::setDurjava(const string& durjava) {
	this->durjava = durjava;
}

const string& adress::getGrad() const {
	return grad;
}

void adress::setGrad(const string& grad) {
	this->grad = grad;
}

int adress::getPokod() const {
	return pokod;
}

void adress::setPokod(int pokod) {
	this->pokod = pokod;
}

const string& adress::getUlica() const {
	return ulica;
}

adress::adress(string durjava, string grad , int pokod, string ulica) {
	setDurjava(durjava);
	setGrad(grad);
	setPokod(pokod);
	setUlica(ulica);

}

void adress::setUlica(const string& ulica) {
	this->ulica = ulica;
}

adress::~adress() {
	// TODO Auto-generated destructor stub
}

void adress::print() {
	cout<<getDurjava() << " "
			<< getGrad()<< " "
			<<getPokod()<< " "
			<<getUlica()<<" "<<endl;
}
