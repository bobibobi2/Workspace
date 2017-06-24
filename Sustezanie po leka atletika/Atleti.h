/*
 * Atleti.h
 *
 *  Created on: May 5, 2017
 *      Author: Puzz
 */

#ifndef ATLETI_H_
#define ATLETI_H_
#include <string>
#include "BestA.h"
using namespace std;
class Atleti {
private:
	string firstname;
	string lastname;
	string nationality;
public:
	Atleti(string,string,string,BestA&);
	void Printinfo();
	virtual ~Atleti();
	const string& getFirstname() const;
	void setFirstname(const string& firstname);
	const string& getLastname() const;
	void setLastname(const string& lastname);
	const string& getNationality() const;
	void setNationality(const string& nationality);
};

#endif /* ATLETI_H_ */
