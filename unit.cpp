#include "unit.h"

Unit::Unit(QObject *parent)
    : QObject{parent},
      m_clickability{true}
{

}

bool Unit::clickability()
{
    return m_clickability;
}

void Unit::setClickability(bool clickability)
{
    if(m_clickability != clickability)
    {
        m_clickability = clickability;
        emit clickabilityChanged();
    }
}
