#pragma once
#include <string>
#include "LongLongBase.h"

using namespace std;

class LongLongOpen : public LongLongBase
{
public:
	LongLongOpen();
	LongLongOpen(double, double);
	LongLongOpen(const LongLongOpen&);

	void Compare();

	LongLongOpen operator + (LongLongOpen r);
	LongLongOpen operator * (LongLongOpen r);
};
