/*
 * doctor.h
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */

#ifndef DOCTOR_H_
#define DOCTOR_H_
#include <string>
#include "pacient.h"
#include "adress.h"
#include <vector>
using namespace std;
class doctor {
private:
	string name;
	string spec;
patient patients[];

public:
	doctor(string,string,int);
	virtual ~doctor();
	const string& getName() const;
	void setName(const string& name);
	int getPatients() const;
	void setPatients(int patients);
	const string& getSpec() const;
	void setSpec(const string& spec);

};

#endif /* DOCTOR_H_ */
