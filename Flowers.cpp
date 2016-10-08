#include <cstdio>
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int day, cycle;

do
 {
   cout << "Skolko dnej proshlo: ";
   cin >> day;
 }
   while(day < 0);

if (day >= 0 && day < 3)
 {
   cycle = day;
 }
else
 {
    cycle = day % 3;
 }
switch (cycle)
 {
     case 0:
     cout << "Fialka, Krokus, Repej" << endl;
     break;

     case 1:
     cout << "Krokus, Fialka, Repej" << endl;
     break;

     case 2:
     cout << "Krokus, Repej, Fialka" << endl;
     break;
 }
   cout << "Press Enter to exit";
    cin.sync();
    cin.get();
    return 0;
 }
