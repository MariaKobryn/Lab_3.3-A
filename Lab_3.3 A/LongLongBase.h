#pragma once
#include <string> 

using namespace std;

class LongLongBase
{
private:
	double older;
	double younger;
public:

	double getOlder() const { return older; }
	double getYounger() const { return younger; }

	void setOlder(double value) { older = value; }
	void setYounger(double value) { younger = value; }

	LongLongBase();
	LongLongBase(double, double);
	LongLongBase(const LongLongBase&);
	~LongLongBase();

	operator string() const;

	friend ostream& operator << (ostream&, const LongLongBase&);
	friend istream& operator >> (istream&, LongLongBase&);


};
