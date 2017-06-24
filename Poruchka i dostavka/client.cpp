/*
 * client.cpp
 *
 *  Created on: Apr 28, 2017
 *      Author: Puzz
 */

#include "client.h"
using namespace std;

client::~client() {
	// TODO Auto-generated destructor stub
}



const string& client::getFirstname() const {
	return firstname;
}

void client::setFirstname(const string& firstname) {
	this->firstname = firstname;
}

const string& client::getLastname() const {
	return lastname;
}

void client::setLastname(const string& lastname) {
	this->lastname = lastname;
}

client::client(string firstname, string lastname,adres& address):adr(address) {
setFirstname(firstname);
setLastname(lastname);
}

void client::Print() {
	cout<<" "<<getFirstname()<<"  "<<getLastname()<<endl;
}

