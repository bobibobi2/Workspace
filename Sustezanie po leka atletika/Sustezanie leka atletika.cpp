//============================================================================
// Name        : Sustezanie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Atleti.h"
#include "BestA.h"
#include "Disciplini.h"
#include "Startove.h"
#include <vector>
using namespace std;

int main() {

	BestA dis(32,13,5,7,1994);

Atleti at("Hristo","aasditov","Romdfgdfhania",dis);
Atleti at1("Hristo","Kiaasdgtov","Romahgghjhnia",dis);
Atleti at2("Hristo","Kidfhztov","Romaamania",dis);
Atleti at4("Hristo","ghsdgitov","Rodasnia",dis);
vector<Atleti>atlets;
atlets.push_back(at);


	return 0;
}
