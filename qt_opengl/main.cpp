
#include <QApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    CoreFunctionWidget w2;

    w2.setWindowTitle(QObject::tr("CoreFunction"));

    w2.show();

    return a.exec();
}
