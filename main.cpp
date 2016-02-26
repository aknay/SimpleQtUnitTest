#include <QDebug>
#include "MathOperation.h"

int main(int argc, char *argv[])
{
        MathOperation mathOperation;
        int result = mathOperation.addTwoNumber(3,4);

        qDebug() << "The Result is " << result;
}

