﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.3 inter.cpp/Lab6.3 inter.cpp.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Lab63intertest
{
	TEST_CLASS(Lab63intertest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t = 0;
			int a[5] = { -1, 2, 0, 4, 8 };
			t = find_maximum(a, 5);
			Assert::AreEqual(t, 8);
		}
	};
}
