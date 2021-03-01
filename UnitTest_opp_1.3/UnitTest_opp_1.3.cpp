#include "pch.h"
#include "CppUnitTest.h"
#include "../Project_opp_1.3/Money.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestopp13
{
	TEST_CLASS(UnitTestopp13)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double value = 10.45;
			Money m; 
			m.DoubleToMoney(value);
			Assert::AreEqual(m.GetHryvnia(), 10L);
		}
		TEST_METHOD(TestMethod2)
		{
			double value = 10.45;
			Money m;
			m.DoubleToMoney(value);
			Assert::AreEqual(m.GetKopiyku(), (unsigned char)45);
		}

	};
}
