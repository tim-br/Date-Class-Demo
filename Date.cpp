#include "Date.h"
#include <iostream>
#include "stdio.h"
using namespace std;
 
// Date constructor
Date::Date(int nMonth, int nDay, int nYear)
{
    SetDate(nMonth, nDay, nYear);
}
 
// Date member function
void Date::SetDate(int nMonth, int nDay, int nYear)
{
    m_nMonth = nMonth;
    m_nDay = nDay;
    m_nYear = nYear;
}
