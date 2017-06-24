/*
 * BestA.cpp
 *
 *  Created on: May 5, 2017
 *      Author: Puzz
 */

#include "BestA.h"
#include <iostream>
using namespace std;


int BestA::getDay() const {
	return day;
}

void BestA::setDay(int day) {
	this->day = day;
}

int BestA::getMinutes() const {
	return minutes;
}

void BestA::setMinutes(int minutes) {
	this->minutes = minutes;
}

int BestA::getMouth() const {
	return month;
}

void BestA::setMouth(int month) {
	this->month = month;
}

float BestA::getSecounds() const {
	return secounds;
}

void BestA::setSecounds(float secounds) {
	this->secounds = secounds;
}

int BestA::getYear() const {
	return year;
}

BestA::BestA(int minutes, float secounds, int day, int month, int year) {
	setMinutes(minutes);
	setSecounds(secounds);
	setDay(day);
	setMouth(month);
	setYear(year);

}

void BestA::Printinfo() {
	cout<<"  "<<getMinutes()<<"  "<<getSecounds()<<"  "<<getDay()<<"  "<<getMouth()<<"  "<<getYear()<<"  "<<endl;
}

void BestA::setYear(int year) {
	this->year = year;
}

BestA::~BestA() {
	// TODO Auto-generated destructor stub
}

