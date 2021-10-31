//Header file for an object oriented bank account program used to keep track of a customer's 
//name and account balance
#ifndef BANKAPP_H
#define BANKAPP_H

#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class bankAccount{
	private:
		string customerName;
		int balance;

		void setName(string n);
		void setBalance(float bal);
	public:
		bankAccount(string n, float bal);
		string getName();
		float getBalance();
		void deposit(float dep);
		void withdraw(float draw);
};
#endif
