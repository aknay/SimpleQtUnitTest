#include "TestMathOperation.h"

TestMathOperation::TestMathOperation()
{

}

void TestMathOperation::testAddition()
{
    MathOperation mathOperation;
    QCOMPARE(mathOperation.addTwoNumber(2,3),5); //QCOMPARE( actual, expected)
}

