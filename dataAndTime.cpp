#include<iostream>
#include "dataAndTime.h"
#include <iomanip>
#include <stdexcept>
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
    int x[]= {0,31,28,31,30,31,30,31,31,30,31,30,31};
    if (day<x[month])
    {

        day=day+1;
    }
    else
    {
        day=day%x[month]+1;
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
//=================constructor========================
Time::Time()
{
    hour=minute=second=0;
}

//===============setTime()===============================
void Time::setTime(int h,int m,int s)
{
    if( (h>=0 && h<24) && (m>=0 && m<60) && (s>=0 && s<60))
    {
        hour=h;
        minute=m;
        second=s;
    }
    else
        throw invalid_argument("hour, minute and/or seconds was out of range ");
}
//================printUniversal()========================
void Time::printUniversal()
{
    cout << setfill( '0' ) << setw ( 2 ) << hour<< ":"
         << setw ( 2 ) << minute << ":" << setw ( 2 ) << second;
} // end function printUniversal

//===============printStandard============
void Time::printStandard()
{
    cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )
         << ":" << setfill( '0' ) << setw ( 2 ) << minute
         << ":" << setw ( 2 ) << second<< ( hour < 12 ? " AM" : " PM" )<<endl;
} // end function printStandard

//===========tick()===========
void Time::tick()
{

    if (second<59)
    {
        second=second%60+1;

    }
    else if(second=59)
    {
        second=second%59;

        if (minute<59)
        {
            minute=(minute%59) +1;

        }
        else
        {
            minute=(minute%59) ;
            if(hour<24)
            {
                hour=hour+1;
                print();
            }
            else
            {
                hour=hour%24;
             void   nextDay();

            }
        }
    }




    printStandard();
}

int main()
{
    date x(6,2,1998);
    Time y;
    y.setTime(1,0,0);
    y.tick();
    return 0;

}


