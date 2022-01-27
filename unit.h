#ifndef UNIT_H
#define UNIT_H

#include <QObject>

class Unit : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool isClickable READ isClickable WRITE setIsClickable NOTIFY isClickableChanged)
    Q_PROPERTY(bool isShip READ isShip WRITE setIsShip NOTIFY isShipChanged)
public:
    explicit Unit(const bool &isShip = false, const bool &isClickable = true);
    ~Unit();

    bool isClickable();
    bool isShip();

signals:
    void isClickableChanged();
    void isShipChanged();

public slots:
    void setIsClickable(bool& v);
    void setIsShip(bool& v);
private:
    bool m_isClickable;
    bool m_isShip;       //represents water and ship tiles
                         //true = isShip,
                         //false = water
};

#endif // UNIT_H
