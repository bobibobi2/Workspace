/*
 * Toools.h
 *
 *  Created on: May 16, 2017
 *      Author: Puzz
 */
#ifndef TOOOls_H_
#define TOOOls_H_
#include <string>
using namespace std;
class Toools {
private:
	int toolNumber;
		string name;
		int quantity;
		double cost;

public:

	Toools(int=0,string ="ga" ,int =03,double =30.0 );

	virtual ~Toools();
	double getCost() const;
	void setCost(double cost);
	const string& getName() const;
	void setName(const string& name);
	int getQuantity() const;
	void setQuantity(int quantity);
	int getToolNumber() const;
	void setToolNumber(int toolNumber);
};


#endif /* TOOOls_H_ */
