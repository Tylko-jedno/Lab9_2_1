#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include <stdio.h>
#include <stdlib.h>
#define z 5
#define SQR(x) ((x)*(x))
#define MAX(y,z) ((y)>(z))?(y):(z)
#define MIN(y,z) ((y)<(z))?(y):(z)
#define ABS(x) abs(x)
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestSQR)
        {
            int x = 3;
            int result = SQR(x);
            Assert::AreEqual(9, result);

            x = -4;
            result = SQR(x);
            Assert::AreEqual(16, result);
        }

        TEST_METHOD(TestMAX)
        {
            int y = 10;
            int result = MAX(y, z);
            Assert::AreEqual(10, result);

            y = -3;
            result = MAX(y, z);
            Assert::AreEqual(5, result);
        }

        TEST_METHOD(TestMIN)
        {
            int y = 10;
            int result = MIN(y, z);
            Assert::AreEqual(5, result);

            y = -3;
            result = MIN(y, z);
            Assert::AreEqual(-3, result);
        }

        TEST_METHOD(TestABS)
        {
            int x = -7;
            int result = ABS(x);
            Assert::AreEqual(7, result);

            x = 5;
            result = ABS(x);
            Assert::AreEqual(5, result);
        }
    };
}
