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
			const char* player1Input = "rock";// lowercase R in Rock invalid
			const char* player2Input = "Paper";

			const char* output = GetWinner(player1Input, player2Input);
			const char* expectedOutput = "Invalid";

			Assert::AreEqual(expectedOutput, output);
		}

		TEST_METHOD(TestInvalidPlayer2)
		{
			const char* player1Input = "Rock";
			const char* player2Input = "paper";// lowercase P in Paper invalid

			const char* output = GetWinner(player1Input, player2Input);
			const char* expectedOutput = "Invalid";

			Assert::AreEqual(expectedOutput, output);
		}

		TEST_METHOD(TestBothInvalid)
		{
			const char* player1Input = "abc";
			const char* player2Input = "def";

			const char* output = GetWinner(player1Input, player2Input);
			const char* expectedOutput = "Invalid";

			Assert::AreEqual(expectedOutput, output);
		}

		TEST_METHOD(TestInvalidPlayer1Empty)
		{
			const char* player1Input = "";
			const char* player2Input = "Paper";

			const char* output = GetWinner(player1Input, player2Input);
			const char* expectedOutput = "Invalid";

			Assert::AreEqual(expectedOutput, output);
		}

		TEST_METHOD(TestInvalidPlayer2Empty)
		{
			const char* player1Input = "Rock";
			const char* player2Input = "";

			const char* output = GetWinner(player1Input, player2Input);
			const char* expectedOutput = "Invalid";

			Assert::AreEqual(expectedOutput, output);
		}

		TEST_METHOD(TestInvalidBothEmpty)
		{
			const char* player1Input = "";
			const char* player2Input = "";

			const char* output = GetWinner(player1Input, player2Input);
			const char* expectedOutput = "Invalid";

			Assert::AreEqual(expectedOutput, output);
		}


	};
}