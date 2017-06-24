/*
 * Package.h
 *
 *  Created on: Apr 28, 2017
 *      Author: Puzz
 */

#ifndef PACKAGE_H_
#define PACKAGE_H_
#include <string>
#include "client.h"
#include "Sender.h"
#include "Recipient.h"
#include "adres.h"
#include <iostream>
using namespace std;

class Package {
private:


	double weight;
	double cost;
	Sender dres;
	Recipient adrr;

public:
	Package(double,double,Sender&,Recipient&);
	void Print();
	virtual ~Package();
	double getCost() const;
	void setCost(double cost);
	double getWeight() const;
	void setWeight(double weight);
};

#endif /* PACKAGE_H_ */
