#include "LongLongClosed.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

LongLongClosed::LongLongClosed()
	: LongLongBase()
{ }

LongLongClosed::LongLongClosed(double a, double b)

	: LongLongBase(a, b)

{}

LongLongClosed::LongLongClosed(const LongLongClosed& l)

	: LongLongBase(l)

{}

void LongLongClosed::Compare()
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

LongLongClosed::operator string() const {
	stringstream sout;
	sout << "LongLong = " << this->getOlder() << " " << this->getYounger() << endl;

	return sout.str();
}

ostream& operator << (ostream& out, const LongLongClosed& l) {
	out << (string)l;
	return out;
}

istream& operator >> (istream& in, LongLongClosed& l) {
	double a, b;
	cout << "Older : "; cin >> a;
	cout << "Younger : "; cin >> b;

	l.setOlder(a);
	l.setYounger(b);

	return in;
}

LongLongClosed LongLongClosed::operator + (LongLongClosed l) {
	LongLongClosed l1(0, 0);

	l1.setOlder(this->getOlder() + l.getOlder());
	l1.setYounger(this->getYounger() + l.getYounger());

	return l1;
}

LongLongClosed LongLongClosed::operator * (LongLongClosed l) {
	LongLongClosed l1(0, 0);

	l1.setOlder(this->getOlder() * l.getOlder());
	l1.setYounger(this->getYounger() * l.getYounger());

	return l1;
}
