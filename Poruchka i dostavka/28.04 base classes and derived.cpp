//============================================================================
// Name        : 04.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "adres.h"
#include "client.h"
#include "Package.h"
#include "Payment.h"
#include "Recipient.h"
#include "Sender.h"
#include <vector>
using namespace std;

int main() {
	adres ad(12,"asd","asghj",55);
Recipient as("Petur","Petrow",ad);
Sender asd("jhgf","ghdhgf",ad);
vector<Recipient>Recvektor;
Recvektor.push_back(as);


	return 0;
}
