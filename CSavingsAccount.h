/**
 * CSavingsAccount.h
 * @author Antoine De Gieter
 */

#ifndef __SAVINGSACCOUNT_H
#define __SAVINGSACCOUNT_H

#include "CAccount.h"

class CSavingsAccount: public CAccount
{		
	protected:
		float m_rate;

	public:
		CSavingsAccount(int accountNumber, float rate);
		void setRate(float rate);
		float getRate();
		void remunerate();
};

#endif