#include <iostream>
#include <stdexcept>
//#include "Date.h"


using namespace std;
///////////////////////// class ///////////////////////////////


class Date
{
private:
    int month;
    int year;
    int day;

public:

    static const int monthperyear=12;
    Date(int=1, int=1, int=2000 )	;    // contsructor
    void print();
    void setDate (int, int,int);
    void setday(int);
    void setyear(int);
    void setmonth(int);
    int getyear ();
    int getmonth ();
    int getday ();
    int checkday(int ) const;

    void tick();

};



////////////////////////// constructor /////////////////////

Date::Date(int d, int m, int y)
{
    setDate(d,m,y);
}
//////////////////// print //////////////////////////

void Date::print()
{
    cout<<day<<"/"<<month<<"/"<<year<<endl;
}

/////////////////// set /////////////////////////////

void Date::setDate(int d, int m, int y)
{
    setday(d);
    setmonth(m);
    setyear(y);
}

void Date::setyear(int y)
{
    year=y;
}

void Date::setday(int d)
{
    day=checkday(d);
}

void Date::setmonth(int m)
{
    if (m>0 && m<=monthperyear) month=m;
    else
        throw invalid_argument("month must be 1-12");
}
//////////////////////// checkday /////////////////

int Date::checkday(int d) const
{
    static const int daypermonth[ monthperyear+1]= {0,31,28,31,30,31,30,31,31,30,31,30,31};

    if (d>0 && d<=daypermonth[month])
        return d;
    if(month ==2&&d==29&&(year%400==0||(year%4==0 && year%100!=0)))
        return d;
    else	throw invalid_argument("error in the day");
}
/////////////////////  get /////////////////////////
int Date::getday()
{
    return day;
}
int Date::getmonth()
{
    return month;
}
int Date::getyear()
{
    return year;
}



//////////////////// tick ///////////////////////

void Date::tick()
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

}


/////////////////// main ////////////////////////
int main()
{
    Date d1(26,2,2012);
    Date d2;

    for(int i=1; i<10; i++)
    {

       // d1.tick();
        cout<<"the date: ";
        //d1.print();

    }
    return 0;
}

