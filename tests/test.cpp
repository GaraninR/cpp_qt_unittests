#include <QtTest/QtTest>
#include "../include/ournumber.h"

class TestOurNumber: public QObject
{
    Q_OBJECT
private slots:
    void testOurNumber();
};

void TestOurNumber::testOurNumber()
{
    OurNumber *on = new OurNumber();
    QCOMPARE(0, on->getNumber());
}

QTEST_MAIN(TestOurNumber)
#include "test.moc"
