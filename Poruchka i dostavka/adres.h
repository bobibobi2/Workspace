/*
 * adres.h
 *
 *  Created on: Apr 28, 2017
 *      Author: Puzz
 */

#ifndef ADRES_H_
#define ADRES_H_
#include <string>
using namespace std;
class adres {
	int street;
	string city;
	string country;
	int zip;
public:
	adres(int,string,string,int);
	virtual ~adres();
	void Print();
	const string& getCity() const;
	void setCity(const string& city);
	const string& getCountry() const;
	void setCountry(const string& country);
	int getStreet() const;
	void setStreet(int street);
	int getZip() const;
	void setZip(int zip);
};

#endif /* ADRES_H_ */
