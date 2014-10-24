/**
 * CAccount.h
 * @author Antoine De Gieter
 */

#ifndef __ACCOUNT_H
#define __ACCOUNT_H

class CAccount 
{
	protected:
		int m_accountNumber;
		double m_balance;
		
	public:
		CAccount(int accountNumber);
		void doWithdrawal(double amount);
		void doDeposit(double amount);
		void doTransfer(double amount, CAccount* target);
		double getBalance();
};

#endif