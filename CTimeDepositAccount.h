/**
 * CTimeDepositAccount.h
 * @author Antoine De Gieter
 */

#ifndef __TIMEDEPOSITACCOUNT_H
#define __TIMEDEPOSITACCOUNT_H

#include "CSavingsAccount.h"

class CTimeDepositAccount: public CSavingsAccount
{
	public:
		CTimeDepositAccount(int accountNumber);
};

#endif