#include "stdafx.h"
#include "CppUnitTest.h"
#include "../AOC_1/Frequency.cpp"
#include"../AOC_1/Frequency.h"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PK4
{
	TEST_CLASS(Task3_TEST)
	{
	public:
		Frequency test;

		TEST_METHOD(TestFileMethod_1)
		{


			Assert::AreEqual(true, test.SavetoVector("input.txt"));

		}

		TEST_METHOD(TestSolverMethod_2)
		{
			test.SavetoVector("input.txt");
			test.PuzzleSolver();
			int wynik = 462;
			Assert::AreEqual(wynik, test.getTemp());

		}

		TEST_METHOD(TestSolverMethod_3)
		{
			Assert::AreNotEqual(false, test.find());

		}

	};
}