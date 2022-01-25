#ifndef UNIT_H
#define UNIT_H

#include <QObject>
#include <QDebug>

class Unit : public QObject
{
    Q_OBJECT
    Q_PROPERTY(bool clickability READ clickability WRITE setClickability NOTIFY clickabilityChanged)
public:
    explicit Unit(QObject *parent = nullptr);
    bool clickability();

signals:
    void clickabilityChanged();

public slots:
     void setClickability(bool clickability);

private:
    bool m_clickability;
};

#endif // UNIT_H
