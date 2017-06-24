/*
 * Sender.h
 *
 *  Created on: May 2, 2017
 *      Author: Puzz
 */

#ifndef SENDER_H_
#define SENDER_H_
#include <string>
#include "adres.h"
using namespace std;
class Sender {
private:
	string firstname;
	string lastname;
	adres dres;
public:
	Sender(string, string, adres&);
	void Print();
	virtual ~Sender();
	const adres& getDres() const;
	void setDres(const adres& dres);
	const string& getFirstname() const;
	void setFirstname(const string& firstname);
	const string& getLastname() const;
	void setLastname(const string& lastname);
	double getPayment() const;
	void setPayment(double payment);
};

#endif /* SENDER_H_ */
