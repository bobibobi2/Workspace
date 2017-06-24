/*
 * client.h
 *
 *  Created on: Apr 28, 2017
 *      Author: Puzz
 */

#ifndef CLIENT_H_
#define CLIENT_H_
#include <string>
#include "adres.h"
#include <iostream>
using namespace std;
class client {
private:
   string firstname;
   string lastname;
	adres adr;

public:
	client();
	client(string,string,adres&);
	virtual ~client();
	void Print();
	const adres& getAdr() const;
	void setAdr(const adres& adr);
	const string& getFirstname() const;
	void setFirstname(const string& firstname);
	const string& getLastname() const;
	void setLastname(const string& lastname);
};

#endif /* CLIENT_H_ */
