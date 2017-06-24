/*
 * adress.h
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */

#ifndef ADRESS_H_
#define ADRESS_H_
#include <string>
using namespace std;

class adress {
private:
	string durjava;
	string grad;
	int pokod;
	string ulica;


public:

	adress(string,string,int,string);
	virtual ~adress();
	const string& getDurjava() const;
	void setDurjava(const string& durjava);
	const string& getGrad() const;
	void setGrad(const string& grad);
	int getPokod() const;
	void setPokod(int pokod);
	const string& getUlica() const;
	void setUlica(const string& ulica);
	void print();
};

#endif /* ADRESS_H_ */
