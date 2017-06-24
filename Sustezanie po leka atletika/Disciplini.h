/*
 * Disciplini.h
 *
 *  Created on: May 5, 2017
 *      Author: Puzz
 */

#ifndef DISCIPLINI_H_
#define DISCIPLINI_H_
#include <string>
#include "BestA.h"
using namespace std;
class Disciplini {
private:
	string disc;
	BestA& worldrecord;
	BestA& championshiprecor;
public:
	Disciplini(string,BestA&,BestA&);
	void Printinfo();
	virtual ~Disciplini();
	const string& getChampionshiprecord() const;
	void setChampionshiprecord(const string& championshiprecord);
	const string& getDisc() const;
	void setDisc(const string& disc);
	const string& getWorldrecord() const;
	void setWorldrecord(const string& worldrecord);
};

#endif /* DISCIPLINI_H_ */
