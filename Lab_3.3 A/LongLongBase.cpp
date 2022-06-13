#include "LongLongBase.h"
#include <iostream> 
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

LongLongBase::LongLongBase() {
	older = 0;
	younger = 0;
}

LongLongBase::LongLongBase(double a, double b) {
	older = a;
	younger = b;
}

LongLongBase::LongLongBase(const LongLongBase& l) {
	older = l.older;
	younger = l.younger;
}

LongLongBase::~LongLongBase() { }

LongLongBase::operator string() const {
	stringstream sout;
	sout << "LongLong = " << older << " " << younger << endl;

	return sout.str();
}

ostream& operator << (ostream& out, const LongLongBase& l) {
	out << (string)l;
	return out;

}

istream& operator >> (istream& in, LongLongBase& l) {
	cout << "Older : "; in >> l.older;
	cout << "Younger : "; in >> l.younger;

	return in;

}
