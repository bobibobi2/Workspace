/*
 * SavingsAccount.h
 *
 *  Created on: Apr 20, 2017
 *      Author: Puzz
 */

#ifndef SAVINGSACCOUNT_H_
#define SAVINGSACCOUNT_H_

class SavingsAccount {
private:
	static float annualInterestRate;
	float savingsBalance;

public:
	SavingsAccount(float,float);
	virtual ~SavingsAccount();
	static float getAnnualInterestRate() const;
	void setAnnualInterestRate(float annualInterestRate);
	int getSavingsBalance() const;
	void setSavingsBalance(savingsBalance);
	float calculateMonthlyInterest();
	static  float modifyInterestRate();
	void calculateM();
};

#endif /* SAVINGSACCOUNT_H_ */
