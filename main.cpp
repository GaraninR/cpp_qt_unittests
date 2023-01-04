#include <QTextStream>
#include "include/ournumber.h"

int main()
{
    OurNumber *on = new OurNumber();
    
    QTextStream(stdout) << "Our number is " << on->getNumber() << endl;
    return 0;
}