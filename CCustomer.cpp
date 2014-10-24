/**
 * CCustomer.cpp
 * @author Antoine De Gieter
 */

#include "CCustomer.h"

CCustomer::CCustomer(string address, string phone):
	m_address(address), m_phone(phone)
{}

void CCustomer::setAddress(string address)
{
	m_address = address;
}

void CCustomer::setPhone(string phone)
{
	m_phone = phone;
}

string CCustomer::getAddress()
{
	return m_address;
}

string CCustomer::getPhone()
{
	return m_phone;
}

void CCustomer::addAccount(CAccount account)
{
	m_accounts.push_back(account);
}

void CCustomer::removeAccount(int account)
{
	m_accounts.erase(m_accounts.begin() + account);
}