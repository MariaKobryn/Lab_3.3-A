#include "LongLongOpen.h"
#include "LongLongClosed.h"
#include <iostream>
#include <string>
#include <sstream>
#include <windows.h>

using namespace std;

int main()
{
    LongLongOpen lo;

    cin >> lo;
    cout << lo;

    cout << "Addition : " << lo.getOlder() + lo.getYounger() << endl;
    cout << "Multiplication : " << lo.getOlder() * lo.getYounger() << endl;
    cout << "Comparing : ";
    lo.Compare();

    LongLongClosed lc;

    cin >> lc;
    cout << lc;

    cout << "Addition : " << lc.getOlder() + lc.getYounger() << endl;
    cout << "Multiplication : " << lc.getOlder() * lc.getYounger() << endl;
    cout << "Comparing : ";
    lc.Compare();
}
