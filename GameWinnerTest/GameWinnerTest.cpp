#include "pch.h"
#include "CppUnitTest.h"

extern "C" const char* GetWinner(const char* player1, const char* player2);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace GameWinnerTest
{
	TEST_CLASS(GameWinnerTest)
	{
	public:
		TEST_METHOD(TestInvalidPlayer1)
		{
			const char* player1Input = "rock";// lowercase R in rock
			const char* player2Input = "Paper";

			const char* output = GetWinner(player1Input, player2Input);
			const char* expectedOutput = "Invalid";

			Assert::AreEqual(expectedOutput, output);
		}
	};
}
