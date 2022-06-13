#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3.3 A/LongLongOpen.h"
#include "../Lab_3.3 A/LongLongOpen.cpp"
#include "../Lab_3.3 A/LongLongBase.h"
#include "../Lab_3.3 A/LongLongBase.cpp"
#include "../Lab_3.3 A/LongLongClosed.h"
#include "../Lab_3.3 A/LongLongClosed.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest33A
{
	TEST_CLASS(UnitTest33A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			LongLongOpen lo(8, 2);
			double a = lo.getOlder();
			Assert::AreEqual(8.0, a);
		}
	};
}
