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


class CHARACTER_API Player :
	public CCharacter
{
private:
	string m_sQuestion;
	list<string> m_slQuestions;
	list <int> m_ilNumbers;
	list <int>::const_iterator m_ilcCurrent;
	list<string>::const_iterator m_slcCurrent;
public:
	Player();
	Player(int type, string name, int age, char sex, string job);
	Player(string question);
	string GetNextQuestion();
	int GetNextQuestionNumber();
	void SetQuestion(string fFile);
	virtual ~Player();
};

