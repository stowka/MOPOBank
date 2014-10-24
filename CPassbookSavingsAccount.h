/**
 * CPassbookSavingsAccount.h
 * @author Antoine De Gieter
 */

#ifndef __PASSBOOKSAVINGSACCOUNT_H
#define __PASSBOOKSAVINGSACCOUNT_H

#include "CSavingsAccount.h"

class CPassbookSavingsAccount: public CSavingsAccount
{
	public:
		CPassbookSavingsAccount(int accountNumber);
};

#endif