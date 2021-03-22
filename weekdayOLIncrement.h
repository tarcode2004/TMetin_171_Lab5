#ifndef WEEKDAY_H
#define WEEKDAY_H
#include <string>
using namespace std;
//weekday
class Day
{
    private:
    string dayName = "Sunday";
    int dayNum = 1;

    static const int Days = 7;
    enum {SUNDAY=1, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
    const string dayNames[Days]{"Sunday", "Monday", "Tuesday", "Wednesday","Thursday","Friday","Saturday"};

    public:
   /* Day()
    {
        dayName = "Sunday";
        dayNum = 1;
    }*/
    int getDayNum()
    {
        return dayNum;
    }
    string getDayName()
    {
        return dayName;
    }

    Day operator++();//overload pre increment
    Day operator++(int);//overload post increment
    Day operator =(const Day& rightDayObj);
};


#endif WEEKDAY_H