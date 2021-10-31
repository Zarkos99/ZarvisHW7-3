#include "bankApp.h"

bankAccount::bankAccount(string n, float bal){
	this->customerName = n;
	this->balance = bal;
}

void bankAccount::setName(string n){
	this->customerName = n;
}

void bankAccount::setBalance(float bal){
	this->balance = bal;
}

string bankAccount::getName(){
	return this->customerName;
}

float bankAccount::getBalance(){
	return this->balance;
}

void bankAccount::deposit(float dep){
	this->balance += dep;
}

void bankAccount::withdraw(float draw){
	this->balance -= draw;
}
