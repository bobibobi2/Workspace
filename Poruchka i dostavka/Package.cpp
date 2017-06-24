/*
 * Package.cpp
 *
 *  Created on: Apr 28, 2017
 *      Author: Puzz
 */

#include "Package.h"
#include <iostream>
using namespace std;


double Package::getCost() const {
	return cost;
}

void Package::setCost(double cost) {
	this->cost = cost;
}

double Package::getWeight() const {
	return weight;
}

void Package::Print() {
	cout<<"  "<<getWeight()<<"  "<<getCost()<<"  "<<endl;
}

void Package::setWeight(double weight) {
	this->weight = weight;
}

Package::Package(double weight,double cost,Sender& dres , Recipient& adrr):dres(dres),adrr(adrr){
	setWeight(weight);
	setCost(cost);

}

Package::~Package() {
	// TODO Auto-generated destructor stub
}

