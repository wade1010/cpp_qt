#include "qperson.h"

QPerson::QPerson(QString name, QObject *parent) : QObject(parent)
{
    this->m_name = name;
}

unsigned QPerson::age()
{
    return this->m_age;
}

void QPerson::setAge(unsigned age)
{
    m_age = age;
    emit(ageChanged(m_age));
}

void QPerson::incAge()
{
    m_age++;
    emit(ageChanged(m_age));
}
