#include<iostream>
#include "date.h"
using namespace std;
date::date(int d,int m,int y)
{
   month=m;
   day=d;
   year=y;
}


void date::print()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;

}
void date::nextDay()
{
    int x[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (day<x[month])
    {

        day=day+1;
    }
   else {
        day=day%x[month]+1;
        cout<<day%x[month]<<" \n";
        if(month<12)
        {
            month=month+1;
        }
        else
        {
            month=month%12+1;
            year=year+1;
        }
    }
    print();
}
int main()
{
    date x(30,11,2009),x2(31,12,2009),x3(2,3,2008);

    x.print();
    x.nextDay();
      x2.print();
    x2.nextDay();
     x3.print();
    x3.nextDay();


    return 0;



}
