#include "stdafx.h"
#include "NonPlayer.h"
#include "iostream"
#include "fstream"
#include <string>

using namespace std;

NonPlayer::NonPlayer() 
{
}

NonPlayer::NonPlayer(int type, string name, int age, char sex, string job) : CCharacter(type, name, age, sex, job)
{
}

NonPlayer::NonPlayer(string answer) 
{
	m_sAnswer = answer;
}

string NonPlayer::GetAnswer() {
	list<string>::const_iterator cs;
	cs = m_slcCurrent;
	m_slcCurrent++;
	
	if (m_slcCurrent == m_slAnswers.end())
	{
		m_slcCurrent = m_slAnswers.begin();
		return "No more Questions";
	}
	return *cs;
}

void NonPlayer::SetAnswers(string fFile)
{
	string line;
	ifstream myFile(fFile);
	if (myFile.is_open())
	{
		while (getline(myFile, line))
		{
			int p = line.find(',');
			string q = line.substr(0, p);
			m_slAnswers.push_back(q);
			int l = line.length();
			string i = line.substr(p + 1, l - p);
			int iInt = atoi(i.c_str());
			m_ilNumbers.push_back(iInt);
		}
		myFile.close();
		m_ilcCurrent = m_ilNumbers.begin();
		m_slcCurrent = m_slAnswers.begin();
	}

	else cout << "File cannot be found";
}

string NonPlayer::GetCorrectAnswer(int iQPlace)
{
	m_slcCurrent = m_slAnswers.begin();
	for (std::list<int>::iterator i = m_ilNumbers.begin(); i != m_ilNumbers.end(); ++i)
	{
		if (*i == iQPlace)
		{
			return *m_slcCurrent;
		}
		m_slcCurrent++;
	}
	return "Sorry i dont have the answer for that!";

}

NonPlayer::~NonPlayer()
{

}