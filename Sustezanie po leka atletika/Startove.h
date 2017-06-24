/*
 * Startove.h
 *
 *  Created on: May 5, 2017
 *      Author: Puzz
 */

#ifndef STARTOVE_H_
#define STARTOVE_H_
#include <string>
#include <iostream>
#include "Disciplini.h"
#include <vector>
#include "Atleti.h"
using namespace std;
class Startove {
private:
enum tip{
	kvalifikaciq,chetvurtfinal,polufinal,final
}tipp;
Disciplini &  disc;
vector <Atleti> atlet;


public:
	Startove();
	virtual ~Startove();
};

#endif /* STARTOVE_H_ */
