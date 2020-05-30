#include<iostream>
#include<cmath>
#include <iomanip>
#include <stdexcept>
using namespace std;
class point
{
private:
    int x;
    int y;
    int hight;
    int width;
public :
     point();

    void area(point ,point,point,point);
    void primeter(point ,point,point,point);
    void setpoint(int,int);
    int distance(point);
     int sethight(point);
     int setwidth(point);
     void squar(point,point,point,point);



};
point::point()
{
    x=y=0;
}
void point::setpoint(int x1,int y1)
{
    if(x1>0&&x1<20&&y1>0&&y1<20){
    x=x1;
    y=y1;
    }
    else throw invalid_argument("hour, minute and/or seconds was out of range ");
}

int point::sethight(point a)
{

    int z= sqrt(pow((x-a.x),2)+pow((y-a.y),2));
   return z;

}

int point ::setwidth(point c)
{
   int z= sqrt(pow((x-c.x),2)+pow((y-c.y),2));
   return z;
}
void point::area(point a,point b,point c,point d)
{
    cout<<"area = "<<(a.sethight(c))*(b.setwidth(d))<<endl;
}
void point::primeter(point a,point b,point c,point d)
{
    cout<<"primeter = "<<2*((a.sethight(c))+(b.setwidth(d)))<<endl;
}
void point::squar(point a,point b,point c,point d)
{
    if(a.sethight(d)==b.setwidth(c))
    {
        cout<< "squar\n";

    }
    else cout<<"not squar\n";
}








int main()
{

  point x,a,b,c,d;
  a.setpoint(5,2);
  b.setpoint(5,3);
  c.setpoint(1,5);
  d.setpoint(1,1);
  x.sethight(c);
  x.setwidth(d);
  x.area(a,b,c,d);
  x.primeter(a,b,c,d);
  x.squar(a,b,c,d);




}














