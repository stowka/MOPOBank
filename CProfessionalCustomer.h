/**
 * CProfessionalCustomer.h
 * @author Antoine De Gieter
 */

#ifndef __PROFESSIONALCUSTOMER_H
#define __PROFESSIONALCUSTOMER_H

#include <string>

#include "CCustomer.h"

using namespace std;

class CProfessionalCustomer: public CCustomer
{		
	private:
		string m_companyName;
		string m_businessIdentification; // SIRET Number

	public:
		CProfessionalCustomer(string companyName, string businessIdentification, 
			string address, string phone);
		void setCompanyName(string companyName);
		void setBusinessIdentification(string businessIdentification);
		string getCompanyName();
		string getBusinessIdentification();
};

#endif