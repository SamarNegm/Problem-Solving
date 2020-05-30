#include <iostream>
#include <iomanip>
#include <stdexcept>
//#include "Time.h"
using namespace std;
 class Time
  {
  public:
     Time(); // default constructor
     void setTime( int , int, int ); // set hour, minute, second
     void printUniversal(); // output time in universal-time format
     void printStandard(); // output time in standard-time format
     void tick();
  public:
     int hour; // 0 - 23 (24-hour clock format)
     int minute; // 0 - 59
     int second; // 0 - 59
  }; // end class Time

 //=================constructor========================
Time::Time(){
hour=minute=second=0;
}

//===============setTime()===============================
void Time::setTime(int h,int m,int s){
if( (h>=0 && h<24) && (m>=0 && m<60) && (s>=0 && s<60)){
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
        << ":" << setw ( 2 ) << second<< ( hour < 12 ? " AM" : " PM" );
          } // end function printStandard

//===========tick()===========
void Time::tick(){

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
       hour=hour+1;
    }
    }



printStandard();
}

//============main====================

int main(){

//===============code in lecture 6 ============

/*
Time t;
cout<<"The initial universal time is ";
t.printUniversal();
cout<<endl<<"The initial standard time is ";
t.printStandard();


t.setTime(13,27,6);
cout<<"\n\n Universal time after setTime is ";
t.printUniversal();
cout<<endl<<"Standard time after setTime is ";
t.printStandard();

try{
t.setTime(99,99,99);
}

catch(invalid_argument &a){
cout<<"\n\n Exception "<<a.what()<<endl;
}

cout<<"\n\n After attemptin invalid settings :"<<endl;
cout<<"universal time is "; t.printUniversal();
cout<<"\n standard time is "; t.printStandard();

*/

Time t;
Time t1;
Time t2;
Time t3;
//t.setTime(12,12,12);
//t.printUniversal();
//cout<<endl;
//t.printStandard();
//cout<<endl;


//t1.printUniversal();
//cout<<endl;
//t.printStandard();
//t2.printUniversal();
//cout<<endl;
//t.printStandard();
//t3.printUniversal();
//cout<<endl;
//t.printStandard();
//t.setTime(23,59,53);  //increment into the next day
//t.setTime(3,58,54);    //increment into the next minute
//t.setTime(3,59,55);  //increment into the next hour
//t.printStandard(); cout<<endl;

/*for(int i=0;i<=30;i++){
	t.tick();
	cout<<"\n";
}
*/
//t.hour=2;
//t.tick();
t.setTime(11,59,59);
t.printStandard();
cout<<endl;
t.tick();


}
