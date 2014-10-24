/**
 * CCurrentAccount.h
 * @author Antoine De Gieter
 */

#ifndef __CURRENTACCOUNT_H
#define __CURRENTACCOUNT_H

#include "CAccount.h"

class CCurrentAccount: public CAccount
{		
	public:
		CCurrentAccount(int accountNumber);
};

#endif