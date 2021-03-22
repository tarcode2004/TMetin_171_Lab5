#include <iostream>
#include <string>
#include "weekdayOLIncrement.h"
using namespace std;


int main()
{
    Day testDay, testDay2;
    testDay2 = ++testDay;


    cout << testDay.getDayNum()
         << testDay.getDayName()
         << endl;

    cout << testDay2.getDayNum()
         << testDay2.getDayName()
         << endl;

}

