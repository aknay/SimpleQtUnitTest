#ifndef TESTMATHOPERATION_H
#define TESTMATHOPERATION_H

#include <QtTest> //for unit testing
#include "MathOperation.h"

/**
 * @brief
 * 1. This class has to inherit from QObject:
 * 2. You need to include the QTest header
 * 3. Declare the test functions as private slots so the test framework finds and executes it.
 */

class TestMathOperation: public QObject {
    Q_OBJECT

public:
    TestMathOperation();

private slots:
    void testAddition();

};

#endif // TESTMATHOPERATION_H
