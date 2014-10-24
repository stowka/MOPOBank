/**
 * CCustomer.h
 * @author Antoine De Gieter
 */

#ifndef __CUSTOMER_H
#define __CUSTOMER_H

#include <string>
#include <vector>

#include "CAccount.h"

using namespace std;

class CCustomer 
{
	protected:
		string m_address;
		string m_phone;
		vector<CAccount> m_accounts;
		
	public:
		CCustomer(string address, string phone);
		void setAddress(string address);
		void setPhone(string phone);
		string getAddress();
		string getPhone();
		void addAccount(CAccount account);
		void removeAccount(int account);
};

#endif