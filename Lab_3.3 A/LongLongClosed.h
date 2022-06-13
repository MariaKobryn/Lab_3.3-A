#pragma once
#include <string>
#include "LongLongBase.h"

using namespace std;

class LongLongClosed : private LongLongBase
{
private:
	double older;
	double younger;
public:

	double getOlder() const { return older; }
	double getYounger() const { return younger; }

	void setOlder(double value) { older = value; }
	void setYounger(double value) { younger = value; }

	LongLongClosed();
	LongLongClosed(double, double);
	LongLongClosed(const LongLongClosed&);

	void Compare();

	operator string() const;

	friend ostream& operator << (ostream&, const LongLongClosed&);
	friend istream& operator >> (istream&, LongLongClosed&);

	LongLongClosed operator + (LongLongClosed r);
	LongLongClosed operator * (LongLongClosed r);
};
