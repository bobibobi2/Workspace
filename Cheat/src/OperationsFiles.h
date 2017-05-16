/*
 * OperationsFiles.h
 *
 *  Created on: May 16, 2017
 *      Author: Puzz
 */


#ifndef OperationsFiles_H_
#define OperationsFiles_H_
#include <fstream>
#include "Toools.h"
#include <iomanip>
using namespace std;

class OperationsFiles {

public:
	int enterChoice();
	void createTextFile(fstream&);
	int getNumber(const char*);
	void updateRecord(fstream&);
	void newRecord(fstream&);
	void deleteRecord(fstream&);
	void outputLine(ostream&,const Toools&);
	OperationsFiles(const char* const);
	virtual ~OperationsFiles();
private:
	fstream file;
};

#endif /* OperationsFiles_H_ */
