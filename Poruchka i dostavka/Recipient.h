/*
 * Recipient.h
 *
 *  Created on: May 2, 2017
 *      Author: Puzz
 */

#ifndef RECIPIENT_H_
#define RECIPIENT_H_
#include "adres.h"
#include <string>
#include <iostream>
using namespace std;
class Recipient {
private:
	string firstname;
	string lastname;
	adres adrr;
public:
	Recipient(string, string, adres&);
	void Print();
	virtual ~Recipient();
	const adres& getAdrr() const;
	void setAdrr(const adres& adrr);
	const string& getFirstname() const;
	void setFirstname(const string& firstname);
	const string& getLastname() const;
	void setLastname(const string& lastname);
};

#endif /* RECIPIENT_H_ */
