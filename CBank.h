/**
 * CBank.h
 * @author Antoine De Gieter
 */

#ifndef __BANK_H
#define __BANK_H

#include <vector>

#include "CCustomer.h"

using namespace std;

class CBank 
{
	protected:
		vector<CCustomer> m_customers;
		
	public:
		CBank();
		void addCustomer(CCustomer customer);
		void removeCustomer(int customer);
		vector<CCustomer> getCustomers();
};

#endif