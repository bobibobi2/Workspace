/*
 * SavingsAccount.cpp
 *
 *  Created on: Apr 20, 2017
 *      Author: Puzz
 */

#include "SavingsAccount.h"
#include <iostream>
using namespace std;

float SavingsAccount::annualInterestRate=0;
float SavingsAccount::getAnnualInterestRate() const {
	return annualInterestRate;
}

void SavingsAccount::setAnnualInterestRate(static float annualInterestRate) {
	this->annualInterestRate = annualInterestRate;
}

int SavingsAccount::getSavingsBalance() const {
	return savingsBalance;
}

void SavingsAccount::setSavingsBalance(float savingsBalance) {
	this->savingsBalance = savingsBalance;
}

SavingsAccount::~SavingsAccount() {
	// TODO Auto-generated destructor stub
}

float SavingsAccount::calculateMonthlyInterest() {

	savingsBalance+=getSavingsBalance() * (annualInterestRate / 12);

}

float SavingsAccount::modifyInterestRate() {

}

void SavingsAccount::calculateM() {

}
