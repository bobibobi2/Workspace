/*
 * adres.h
 *
 *  Created on: Apr 20, 2017
 *      Author: Puzz
 */

#ifndef ADRES_H_
#define ADRES_H_
#include <string>
using namespace std;

class adres {
private:
	string street;
	int streetnumber;
	int id;

public:

	adres(string,int,int);
	virtual ~adres();
	int getId() const;
	void setId(int id);
	const string& getStreet() const;
	void setStreet(const string& street);
	int getStreetnumber() const;
	void setStreetnumber(int streetnumber);
};

#endif /* ADRES_H_ */
