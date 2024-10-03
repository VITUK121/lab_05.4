#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_05.4/lab_05.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest054
{
	TEST_CLASS(UnitTest054)
	{
	public:

		int limit=19;
		int k = 3, n = 19;
		double test(int k, int n) {
			double sum = 0;
			while (k != n+1) {
				sum += sqrt(pow(sin(k), 2) + pow(cos(static_cast<double>(n) / k), 2));
				k++;
			}
			return sum;
		}
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(test(k, n), S_0(k, n, limit), 0.0000000000001);//похибка  0.0000000000001
		}
		TEST_METHOD(TestMethod2)
		{
			Assert::AreEqual(test(k, n), S_1(k, n, limit), 0.0000000000001);
		}
		TEST_METHOD(TestMethod3)
		{
			Assert::AreEqual(test(k, n), S_2(k, n, limit), 0.0000000000001);
		}
		TEST_METHOD(TestMethod4)
		{
			Assert::AreEqual(test(k, n), S_3(k, n, limit), 0.0000000000001);
		}
		TEST_METHOD(TestMethod5)
		{
			Assert::AreEqual(test(k, n), S_4(k, n, limit), 0.0000000000001);
		}
	};
}
