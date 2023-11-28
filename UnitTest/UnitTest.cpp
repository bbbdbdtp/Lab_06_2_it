#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_2_it/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(Testaverage)
		{
			const int size = 5;
			int a[size] = { 2, 5, 2, 7, 2 };

			int result = average(a, size);

			Assert::AreEqual(6, result);
		}
	};
}