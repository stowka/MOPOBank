/**
 * CBank.cpp
 * @author Antoine De Gieter
 */

#include <iostream>

#include "CBank.h"
#include "CCustomer.h"

using namespace std;

CBank::CBank()
{
	cout << "Welcome to MOPO Bank" << endl;
	cout << "\tby Antoine De Gieter" << endl;
}

void CBank::addCustomer(CCustomer customer)
{
	m_customers.push_back(customer);
}

void CBank::removeCustomer(int customer)
{
	/*
	 * TODO delete this customer's accounts
	 */
	m_customers.erase(m_customers.begin() + customer);
}

vector<CCustomer> CBank::getCustomers()
{
	return m_customers;
}