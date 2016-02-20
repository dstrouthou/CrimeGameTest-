// Character.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"
#include "Character.h"
#include <string>
using namespace std;


// This is an example of an exported variable
CHARACTER_API int nCharacter=0;

// This is an example of an exported function.
CHARACTER_API int fnCharacter(void)
{
	return 42;
}

// This is the constructor of a class that has been exported.
// see Character.h for the class definition
CCharacter::CCharacter()
{
	//m_iType = 0;
	//return;
}

CCharacter::CCharacter(int type, string name, int age, char sex, string job)
{
	m_iAge = age;
	m_iType = type;
	m_sName = name;
	m_sJob = job;
	m_sSex = sex;

}

int CCharacter::GetType()
{
	return m_iType;
}

void CCharacter::SetType(int t)
{
	m_iType = t;
}

string CCharacter::GetJob()
{
	return m_sJob;
}

void CCharacter::SetJob(string job)
{
	m_sJob = job;
}

string CCharacter::GetName()
{
	return m_sName;
}

void CCharacter::SetName(string sn)
{
	m_sName = sn;
}

char CCharacter::GetSex()
{
	return m_sSex;
}

void CCharacter::SetSex(char sex)
{
	m_sSex = sex;
}

int CCharacter::GetAge()
{
	return m_iAge;
}

void CCharacter::SetAge(int age)
{
	m_iAge = age;
}


