#include "stdafx.h"
#include "Player.h"
#include "iostream"
#include "fstream"
#include <string>

using namespace std;

Player::Player()
{
}

Player::Player(int type, string name, int age, char sex, string job) : CCharacter(type, name, age, sex, job)
{
}

Player::Player(string question) 
{
	m_sQuestion = question;
}

string Player::GetNextQuestion()
{
	list<string>::const_iterator cs;
	cs = m_slcCurrent;
	m_slcCurrent++;

	if (m_slcCurrent == m_slQuestions.end())
	{
		m_slcCurrent = m_slQuestions.begin();
		return "No more Questions";
	}
	return *cs;
}

int Player::GetNextQuestionNumber()
{
	list<int>::const_iterator ci;
	ci = m_ilcCurrent;
	m_ilcCurrent++;

	if (m_ilcCurrent == m_ilNumbers.end())
	{
		m_ilcCurrent = m_ilNumbers.begin();
	}
	return *ci;
}

void Player::SetQuestion(string fFile)
{
	string line;
	ifstream myFile(fFile);
	if (myFile.is_open())
	{
		while (getline(myFile, line))
		{
			int p = line.find(',');
			string q = line.substr(0, p);
			m_slQuestions.push_back(q);
			int l = line.length();
			string i = line.substr(p + 1, l - p);
			int iInt = atoi(i.c_str());
			m_ilNumbers.push_back(iInt);
		}
		myFile.close();
		m_ilcCurrent = m_ilNumbers.begin();
		m_slcCurrent = m_slQuestions.begin();
	}

	else cout << "File cannot be found";
}

Player::~Player()
{

}