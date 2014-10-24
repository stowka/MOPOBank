/**
 * CAccount.cpp
 * @author Antoine De Gieter
 */

#include "CAccount.h"

CAccount::CAccount(int accountNumber):
	m_accountNumber(accountNumber), m_balance(0.0)
{}

void CAccount::doWithdrawal(double amount)
{
	m_balance -= amount;
}

void CAccount::doDeposit(double amount)
{
	m_balance += amount;
}

void CAccount::doTransfer(double amount, CAccount* target)
{
	doWithdrawal(amount);
	target->doDeposit(amount);
}

double CAccount::getBalance()
{
	return m_balance;
}