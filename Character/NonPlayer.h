#pragma once
#ifdef CHARACTER_EXPORTS
#define CHARACTER_API __declspec(dllexport)
#else
#define CHARACTER_API __declspec(dllimport)
#endif
#include "Character.h"
#include <string>
#include <iostream>
#include <list>

using namespace std;

class CHARACTER_API NonPlayer :
	public CCharacter
{
private: 
	string m_sAnswer;
	list<string> m_slAnswers;
	list <int> m_ilNumbers;
	list <int>::const_iterator m_ilcCurrent;
	list<string>::const_iterator m_slcCurrent;
public:
	NonPlayer();
	NonPlayer(int type, string name, int age, char sex, string job);
	NonPlayer(string answer);
	string GetAnswer();
	string GetCorrectAnswer(int iQPlace);
	void SetAnswers(string fFile);
	virtual ~NonPlayer();
};

