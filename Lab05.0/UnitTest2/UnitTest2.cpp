#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		double h(const double a, const double b) {
			return (a * a - sin(b) * cos(a) + b * b);
		}

		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(0.0, h(0, 0), 1e-9);
		}
	};
}
