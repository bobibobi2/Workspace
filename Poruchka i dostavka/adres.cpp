/*
 * adres.cpp
 *
 *  Created on: Apr 28, 2017
 *      Author: Puzz
 */

#include "adres.h"
#include <iostream>
using namespace std;


adres::~adres() {
	// TODO Auto-generated destructor stub
}

const string& adres::getCity() const {
	return city;
}

void adres::setCity(const string& city) {
	this->city = city;
}

const string& adres::getCountry() const {
	return country;
}

void adres::setCountry(const string& country) {
	this->country = country;
}

int adres::getStreet() const {
	return street;
}

void adres::setStreet(int street) {
	this->street = street;
}

int adres::getZip() const {
	return zip;
}

adres::adres(int street, string city, string country, int zip) {
	setStreet(street);
	setCity(city);
	setCountry(country);
	setZip(zip);}

void adres::setZip(int zip) {
	this->zip = zip;
}

void adres::Print() {
	cout<<"  "<<getStreet()<<" "<<getCity()<<"  "<<getCountry()<<"  "<<getZip()<<endl;

}

int adres::getCost() const {
	return cost;
}

void adres::setCost(int cost) {
	this->cost = cost;
}

int adres::getHowmany() const {
	return howmany;
}

void adres::setHowmany(int howmany) {
	this->howmany = howmany;
}
