/*
 * pacient.h
 *
 *  Created on: Apr 19, 2017
 *      Author: Puzz
 */

#ifndef PACIENT_H_
#define PACIENT_H_
#include <iostream>
#include <string>
using namespace std;

class pacient {
private:
	string name;
	int age;
  string gender;
public:
	pacient(string,int,string);
	virtual ~pacient();
	int getAge() const;
	void setAge(int age);
	const string& getGender() const;
	void setGender(const string& gender);
	const string& getName() const;
	void setName(const string& name);

};

#endif /* PACIENT_H_ */
