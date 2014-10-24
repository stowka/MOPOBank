/**
 * CIndividualCustomer.cpp
 * @author Antoine De Gieter
 */

#include "CIndividualCustomer.h"

CIndividualCustomer::CIndividualCustomer(string lastName, string firstName,
	string address, string phone): 
	CCustomer(address, phone), m_lastName(lastName), m_firstName(firstName)
{}

void CIndividualCustomer::setLastName(string lastName)
{
	m_lastName = lastName;
}

void CIndividualCustomer::setFirstName(string firstName)
{
	m_firstName = firstName;
}

string CIndividualCustomer::getLastName()
{
	return m_lastName;
}

string CIndividualCustomer::getFirstName()
{
	return m_firstName;
}