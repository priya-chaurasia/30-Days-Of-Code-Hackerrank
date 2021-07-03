#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() 
{
    int Day, Month, Year, Day1, Month1, Year1, mdiff, ddiff, ydiff, diff;
    
    cin>>Day>>Month>>Year>>Day1>>Month1>>Year1;

    mdiff = Month - Month1;
    ddiff = Day - Day1;
    ydiff = Year - Year1;
    diff=(Year-Year1>0)?10000:(Month-Month1>0&&ydiff==0)?mdiff*500:(Day-Day1>0 && ydiff==0)?ddiff*15:0;    
    cout<<diff<<endl;

    return 0;
}