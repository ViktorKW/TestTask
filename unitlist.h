#ifndef UnitLIST_H
#define UnitLIST_H

#include <QObject>
#include <QVector>
#include <QQmlEngine>
#include <random>
#include <time.h>

#include "unit.h"
#include "datafile.h"


class UnitList : public QObject
{
    Q_OBJECT

    Q_PROPERTY(int count READ count CONSTANT)

public:
    explicit UnitList(QObject *parent = nullptr);
    ~UnitList();

    int count() const;

    Q_INVOKABLE QObject * unitAt(int index) const;

private:
    QVector<Unit*> m_units;

};

#endif // UNITLIST_H
