#include "myclass.h"

// Constructor
MyClass::MyClass(QString name)
{
    myName = name;
}

void MyClass::setLabel(QString label)
{
  if( myLabel == label )
    return;

  QTextStream(stdout) << myName << ": label changed: " << label << endl;
  myLabel = label;
  emit labelChanged(myLabel);
}
