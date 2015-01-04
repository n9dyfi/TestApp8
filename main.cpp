#include "myclass.h"

int main()
{
    MyClass *a, *b, *c;

    a = new MyClass("a");
    b = new MyClass("b");
    c = new MyClass("c");

    QObject::connect(a,SIGNAL(labelChanged(QString)),b,SLOT(setLabel(QString)));
    QObject::connect(b,SIGNAL(labelChanged(QString)),c,SLOT(setLabel(QString)));
    QObject::connect(c,SIGNAL(labelChanged(QString)),b,SLOT(setLabel(QString)));

    QTextStream(stdout) << "Calling b->setLabel(\"First\")" << endl;
    b->setLabel("First");

    QTextStream(stdout) << "Calling a->setLabel(\"Second\")" << endl;
    a->setLabel("Second");
}
