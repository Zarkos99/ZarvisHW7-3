//Main driver file for an object oriented bank account program to keep track of a customer's name 
//and balance
#include "bankApp.h"

int main(int argc, char* argv[]){
	bankAccount jackAccount("Jack Smith", 50);
	bankAccount jillAccount("Jill Brian", 100);
	bankAccount bankArray[3]={bankAccount("Ralph Kramden", 10), 
				  bankAccount("Alice Kramden", 20), 
				  bankAccount("Ed Norton", 30)     };
	jackAccount.deposit(30);
	jackAccount.withdraw(20);
	jillAccount.deposit(30);
	jillAccount.withdraw(20);

	for(int i=0; i<3; i++){
		bankArray[i].deposit(30);
		bankArray[i].withdraw(20);
	}

	cout << "Account Name:		Account Balance:" << endl;
	cout << jackAccount.getName() << "		" << jackAccount.getBalance() << endl;
	cout << jillAccount.getName() << "		" << jillAccount.getBalance() << endl;
	for(int i=0; i<3; i++){
	cout << bankArray[i].getName() << "		" << bankArray[i].getBalance() << endl;
	}
	return 0;
}
