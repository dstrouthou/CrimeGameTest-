// IntegrationTest.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "fstream"
#include "..\Character\Player.h"
#include "..\Character\NonPlayer.h"

int _tmain(int argc, _TCHAR* argv[])
{
	Player p(0, "David", 40, 'M', "Football player");
	NonPlayer np(1, "Bean", 50, 'M', "actor");
	p.SetQuestion("Questions.txt");
	np.SetAnswers("Answers.txt");
	
	cout << p.GetNextQuestion() << '\n';
	int t = p.GetNextQuestionNumber();
	string s = np.GetCorrectAnswer(t);
	cout << s << '\n';

	return 0;
}

