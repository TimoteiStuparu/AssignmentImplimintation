#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" const char* result(const char* player1, const char* player2);
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
        TEST_METHOD(draw)
        {
            Assert::AreEqual("Draw", result("Rock", "Rock"));
            Assert::AreEqual("Draw", result("Paper", "Paper"));
            Assert::AreEqual("Draw", result("Scissors", "Scissors"));
        }

        TEST_METHOD(player1wins)
        {
            Assert::AreEqual("Player1", result("Rock", "Scissors"));
            Assert::AreEqual("Player1", result("Paper", "Rock"));
            Assert::AreEqual("Player1", result("Scissors", "Paper"));
        }

        TEST_METHOD(player2wins)
        {
            Assert::AreEqual("Player2", result("Rock", "Paper"));
            Assert::AreEqual("Player2", result("Paper", "Scissors"));
            Assert::AreEqual("Player2", result("Scissors", "Rock"));
        }

        TEST_METHOD(Invalid)
        {
            Assert::AreEqual("Invalid", result("Rock", "Lizard"));
            Assert::AreEqual("Invalid", result("Spock", "Paper"));
        }
	};
}
