/*
 * Payment.h
 *
 *  Created on: May 2, 2017
 *      Author: Puzz
 */

#ifndef PAYMENT_H_
#define PAYMENT_H_

#include "Sender.h"
#include <string>
#include <iostream>
using namespace std;

class Payment {
	int tip;
	int travel;
	int dds;
public:

	Payment(int,int,int);
	void Print();
	virtual ~Payment();
	int getDds() const;
	void setDds(int dds);
	int getTip() const;
	void setTip(int tip);
	int getTravel() const;
	void setTravel(int travel);
};

#endif /* PAYMENT_H_ */
