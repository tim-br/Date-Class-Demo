#include "Date.h"
#include <iostream>
#include "stdio.h"
#include "Date.cpp"
using namespace std;

int main()
{
  Date date(24, 21, 1989);

  int a = date.GetMonth();
  cout << a << endl;
 
  return 0;
}

