/*
 * Student.h
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */

#ifndef STUDENT_H_
#define STUDENT_H_
#include "adress.h"
#include <string>
using namespace std;

class Student {
private:
	string name;
	string spec;
	adress addres;
public:
	Student(string,string,adress&);
	virtual ~Student();
	const adress& getAddres() const;
	void setAddres(const adress& addres);
	const string& getName() const;
	void setName(const string& name);
	const string& getSpec() const;
	void setSpec(const string& spec);
	void print();
};

#endif /* STUDENT_H_ */
