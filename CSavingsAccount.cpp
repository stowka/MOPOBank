/**
 * CSavingsAccount.cpp
 * @author Antoine De Gieter
 */

#include "CSavingsAccount.h"

CSavingsAccount::CSavingsAccount(int accountNumber, float rate):
	CAccount(accountNumber), m_rate(rate)
{}

void CSavingsAccount::setRate(float rate)
{
	m_rate = rate;
}

float CSavingsAccount::getRate()
{
	return m_rate;
}

void CSavingsAccount::remunerate()
{
	m_balance += m_rate * m_balance;
}