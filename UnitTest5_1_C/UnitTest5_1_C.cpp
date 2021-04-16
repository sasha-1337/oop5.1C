#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop5.1C\oop5.1C\Money.cpp"
#include "D:\Student\oop5.1C\oop5.1C\Money_public.cpp"
#include "D:\Student\oop5.1C\oop5.1C\Money_private.cpp"
#include "D:\Student\oop5.1C\oop5.1C\MyException.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51C
{
	TEST_CLASS(UnitTest51C)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Money_public sum1(1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0),
				sum2(2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0, 2.0);
			double t = sum1 / sum2;
			Assert::AreEqual(t, 2.0);
		}
		TEST_METHOD(TestMethod2)
		{
			Money_public a;
			double s = a.Divide(20, 2);
			Assert::AreEqual(s, 10.0);
		}
	};
}
