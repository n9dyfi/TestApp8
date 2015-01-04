#ifndef MYCLASS_H
#define MYCLASS_H

#include <QObject>
#include <QTextStream>

class MyClass : public QObject
{
    Q_OBJECT
private:
    QString myName;
    QString myLabel;
public:
    MyClass(QString text);
signals:
    void labelChanged(QString);
public slots:
    void setLabel(QString label);
};

#endif // MYCLASS_H
