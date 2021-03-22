#include "weekdayOLIncrement.h"
#include <iostream>

Day Day::operator = (const Day& rightDayObj){
    if(this != &rightDayObj) {
        return rightDayObj;
    }
        return *this;

}

Day Day::operator++()
{

    if(dayNum == SATURDAY)
    {
        dayNum = SUNDAY;
    }
    else
    {
        dayNum++;
    }
    dayName = dayNames[dayNum - 1];
    return *this;
}

Day Day::operator++(int)
{
    Day tempDay = *this;
    if(dayNum == SATURDAY)
    {
        dayNum = SUNDAY;
    }
    else
    {
        dayNum++;
    }
    dayName = dayNames[dayNum - 1];
    return tempDay;
}

