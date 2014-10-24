/**
 * main.cpp
 * @author Antoine De Gieter
 */

#include <stdio.h>
#include <stdlib.h>

#include <iostream>

#include "CCustomer.h"
#include "CIndividualCustomer.h"
#include "CProfessionalCustomer.h"
#include "CAccount.h"
#include "CCurrentAccount.h"
#include "CSavingsAccount.h"
#include "CPassbookSavingsAccount.h"
#include "CTimeDepositAccount.h"
#include "CBank.h"

#define DISPLAY_CUSTOMERS 1
#define DISPLAY_ACCOUNTS 1
#define ADD_INDIVIDUAL_CUSTOMER 1
#define ADD_CURRENT_ACCOUNT 1

#define ADD_CUSTOMER 2
#define ADD_ACCOUNT 2
#define ADD_PROFESSIONAL_CUSTOMER 2
#define ADD_SAVINGS_ACCOUNT 2

#define REMOVE_CUSTOMER 3
#define BACK 3

#define EXIT 4

using namespace std;

int displayMenuBank();
int displayMenuCustomer();
int displayMenuAddCustomer();
int displayMenuAddAccount();

int main()
{
	CBank* bank = new CBank();

	int choice;
	//choice = displayMenuBank();


	// TESTS - BEGIN

	bank->addCustomer(CIndividualCustomer("De Gieter", "Antoine", 
		"16 rue Einstein", "0836656565"));
	bank->addCustomer(CCustomer("17 rue Seinstein", "0836656565"));
	bank->addCustomer(CProfessionalCustomer("Net Production", "893445", 
		"18 rue Teinstein", "0836656565"));

	for(vector<CCustomer>::iterator it = bank->getCustomers().begin();
		it != bank->getCustomers().end();
		it += 1)
	{
		cout << it->getAddress() << endl;
	}

	// TESTS - END
}

int displayMenuBank()
{
	cout << endl;
	cout << "1] DISPLAY CUSTOMERS" << endl;
	cout << "2] ADD CUSTOMER" << endl;
	cout << "3] REMOVE CUSTOMER" << endl;
	cout << "4] EXIT" << endl;
	int choice;
	cin >> choice;
	return choice;
}

int displayMenuCustomer()
{
	cout << endl;
	cout << "1] DISPLAY ACCOUNTS" << endl;
	cout << "2] ADD ACCOUNT" << endl;
	cout << "3] REMOVE ACCOUNT" << endl;
	cout << "4] BACK" << endl;
	int choice;
	cin >> choice;
	return choice;
}

int displayMenuAddCustomer()
{
	cout << endl;
	cout << "1] INDIVIDUAL CUSTOMER" << endl;
	cout << "2] PROFESSIONAL CUSTOMER" << endl;
	cout << "3] BACK" << endl;
	int choice;
	cin >> choice;
	return choice;
}

int displayMenuAddAccount()
{
	cout << endl;
	cout << "1] CURRENT ACCOUNT" << endl;
	cout << "2] SAVINGS ACCOUNT" << endl;
	cout << "3] BACK" << endl;
	int choice;
	cin >> choice;
	return choice;
}