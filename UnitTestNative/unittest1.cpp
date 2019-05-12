#include "stdafx.h"
#include "CppUnitTest.h"

#include "../ConsoleApp/check.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestNative
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			auto actual = CheckE2('e', 2);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestMethod2)
		{
			auto actual = CheckE2('f', 3);
			auto expected = false;
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestMethod3)
		{
			auto actual = CheckE2('g', 5);
			auto expected = true;
			Assert::AreEqual(expected, actual);
		}
	};
}