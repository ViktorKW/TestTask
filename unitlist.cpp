#include "unitlist.h"

UnitList::UnitList(QObject *parent)
    : QObject{parent}
{
    srand (time(NULL));

    QVector<bool> vec = DataFile::GetData();

    for(bool item : vec){
         m_units << new Unit(item);
    }
    qDebug("unitlist created");
}

UnitList::~UnitList()
{
    qDeleteAll(m_units);
    m_units.clear();
    qDebug("unitlist destroyed");
}

int UnitList::count() const
{
    return m_units.count();
}

QObject *UnitList::unitAt(int index) const
{
    if(index < 0 || index >= m_units.count()){
        return 0;
    }

    QQmlEngine::setObjectOwnership(m_units[index], QQmlEngine::CppOwnership); // preventing QML side from using garbage collector
    return m_units[index];
}
