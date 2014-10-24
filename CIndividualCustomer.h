/**
 * CIndividualCustomer.h
 * @author Antoine De Gieter
 */

#ifndef __INDIVIDUALCUSTOMER_H
#define __INDIVIDUALCUSTOMER_H

#include <string>

#include "CCustomer.h"

using namespace std;

class CIndividualCustomer: public CCustomer
{		
	private:
		string m_lastName;
		string m_firstName;

	public:
		CIndividualCustomer(string lastName, string firstName, 
			string address, string phone);
		void setLastName(string lastName);
		void setFirstName(string firstName);
		string getLastName();
		string getFirstName();
};

#endif