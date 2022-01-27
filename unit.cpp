#include "unit.h"



Unit::Unit(const bool &isShip, const bool &isClickable):
            m_isShip(isShip),
            m_isClickable(isClickable)
{
    qDebug("unit created");
}

Unit::~Unit()
{
    qDebug("unit destroyed");
}

bool Unit::isClickable()
{
    return m_isClickable;
}

bool Unit::isShip()
{
    return m_isShip;
}

void Unit::setIsClickable(bool& v)
{
    qDebug("------------");
    qDebug("This Field is no longer clickable!\n");
    m_isClickable = v;
    emit isClickableChanged();
}

void Unit::setIsShip(bool& v)
{
    if(m_isShip){
        qDebug("Hit!");
        qDebug("------------\n");
        m_isShip = v;   //turning ship into water to record win condition
    }
    else{
        qDebug("Miss!");
        qDebug("------------\n");
    }
}
