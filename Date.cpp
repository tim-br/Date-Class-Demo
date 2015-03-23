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

int main()
{
  //const Something cSomething; // calls default constructor
 
    //cSomething.m_nValue = 5; // violates const
    //cSomething.ResetValue(); // violates const
    //cSomething.SetValue(5); // violates const

  Date date(24, 21, 1989);

  int a = date.GetMonth();
  cout << a << endl;
 
    return 0;
}
