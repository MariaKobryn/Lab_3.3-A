#include "LongLongOpen.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

LongLongOpen::LongLongOpen()
	: LongLongBase()
{ }

LongLongOpen::LongLongOpen(double a, double b)

	: LongLongBase(a, b)

{}

LongLongOpen::LongLongOpen(const LongLongOpen& l)

	: LongLongBase(l)

{}

void LongLongOpen::Compare()
{
	if (getOlder() + getYounger() == getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() != getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is not equal  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() > getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() < getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less than " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() >= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is bigger/equal than  " << getOlder() * getYounger() << " \n ";

	if (getOlder() + getYounger() <= getOlder() * getYounger())
		cout << getOlder() + getYounger() << "  is less/equal than  " << getOlder() * getYounger() << " \n ";

}

LongLongOpen LongLongOpen::operator + (LongLongOpen l) {
	LongLongOpen l1(0, 0);

	l1.setOlder(this->getOlder() + l.getOlder());
	l1.setYounger(this->getYounger() + l.getYounger());

	return l1;
}

LongLongOpen LongLongOpen::operator * (LongLongOpen l) {
	LongLongOpen l1(0, 0);

	l1.setOlder(this->getOlder() * l.getOlder());
	l1.setYounger(this->getYounger() * l.getYounger());

	return l1;
}
