/**
 * CProfessionalCustomer.cpp
 * @author Antoine De Gieter
 */

#include "CProfessionalCustomer.h"

CProfessionalCustomer::CProfessionalCustomer(string companyName, 
	string businessIdentification, string address, string phone): 
	CCustomer(address, phone), m_companyName(companyName),
	m_businessIdentification(businessIdentification)
{}

void CProfessionalCustomer::setCompanyName(string companyName)
{
	m_companyName = companyName;
}

void CProfessionalCustomer::setBusinessIdentification(
	string businessIdentification)
{
	m_businessIdentification = businessIdentification;
}

string CProfessionalCustomer::getCompanyName()
{
	return m_companyName;
}

string CProfessionalCustomer::getBusinessIdentification()
{
	return m_businessIdentification;
}