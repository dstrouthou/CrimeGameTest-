#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Character\Player.h"
#include "..\Character\NonPlayer.h"
#include "..\Character\Character.h"
#include <string>
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CrimeGameTest
{		
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(PlayerCharacterIsType0)
		{
			Player p(0, "David", 40, 'M', "Football player");
			Assert::AreEqual(0,p.GetType());
			string name ="David";
			Assert::AreEqual(name, p.GetName());
			char sex = 'M';
			Assert::AreEqual(sex, p.GetSex());
			string job = "Football player";
			Assert::AreEqual(job, p.GetJob());
		}


		TEST_METHOD(NonPlayerCharacterIsType1)
		{
			NonPlayer np(1, "Bean", 50, 'M', "actor");
			Assert::AreEqual(1, np.GetType());
			string name = "Bean";
			Assert::AreEqual(name, np.GetName());
			char sex = 'M';
			Assert::AreEqual(sex, np.GetSex());
			string job = "actor";
			Assert::AreEqual(job, np.GetJob());
		}

	};
}