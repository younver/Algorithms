#include <bits/stdc++.h>

using namespace std;

int hh, mm, ss;
char meridiem;

int main()
{
    scanf("%d:%d:%d%s", &hh, &mm, &ss, &meridiem);
    
    if(meridiem == 'A' && hh==12)
        hh = 0;
    if(meridiem == 'P' && hh!=12)
        hh += 12;
    
    printf("%02d:%02d:%02d", hh, mm, ss);
    
    return 0;
}
