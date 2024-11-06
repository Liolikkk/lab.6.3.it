#include "pch.h"
#include "CppUnitTest.h"
#include "../ConsoleApplication1/ConsoleApplication1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int b[] = { 3, 8, -6, -10, 5 }; 
			int result = CountNegative(b, 5); 
			Assert::AreEqual(result, 2);
		}
	};
}
