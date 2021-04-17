#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5.1C/Vector2D.h"
#include "../lab5.1C/Vector2D.cpp"
#include "../lab5.1C/Vector.h"
#include "../lab5.1C/Vector.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Vector a(1, 0);
			++a;
			Assert::AreEqual(a.getX(), 2.0);
		}
	};
}
