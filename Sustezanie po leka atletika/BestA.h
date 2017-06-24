/*
 * BestA.h
 *
 *  Created on: May 5, 2017
 *      Author: Puzz
 */

#ifndef BESTA_H_
#define BESTA_H_

class BestA {
private:
	int minutes;
	float secounds;
	 int day;
	 int month;
	 int year;
public:
	BestA(int,float,int,int,int);
	void Printinfo();
	virtual ~BestA();
	int getDay() const;
	void setDay(int day);
	int getMinutes() const;
	void setMinutes(int minutes);
	int getMouth() const;
	void setMouth(int mouth);
	float getSecounds() const;
	void setSecounds(float secounds);
	int getYear() const;
	void setYear(int year);
};

#endif /* BESTA_H_ */
