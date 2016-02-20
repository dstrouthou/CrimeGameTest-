// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the CHARACTER_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// CHARACTER_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#pragma once
#ifdef CHARACTER_EXPORTS
#define CHARACTER_API __declspec(dllexport)
#else
#define CHARACTER_API __declspec(dllimport)
#endif
#include <string>

using namespace std;

// This class is exported from the Character.dll
class CHARACTER_API CCharacter {
protected:
	int m_iType;
	int m_iAge;
	string m_sName;
	string m_sJob;
	char m_sSex;
public:
	CCharacter(void);
	CCharacter(int type, string name, int age, char sex, string job);
	int GetType();
	void SetType(int t);
	string GetName();
	void SetName(string sn);
	char GetSex();
	void SetSex(char sex);
	int GetAge();
	void SetAge(int age);
	string GetJob();
	void SetJob(string job);
};

extern CHARACTER_API int nCharacter;

CHARACTER_API int fnCharacter(void);
