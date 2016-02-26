#include "UnitTest.h"

UnitTest::UnitTest()
{

}

void UnitTest::run()
{
    TestMathOperation testMathOperation;
    QTest::qExec(&testMathOperation);
}

