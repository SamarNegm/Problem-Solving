#include<iostream>
#include <iomanip>
#include <stdexcept>
using namespace std;
class rectangle
{
public:
    rectangle();

    void setwidth(float);
    float getwigth();
    void setlength(float);
    void area();
    void primeter();
    float getlength();
private:
    float  width;
    float length;

};
rectangle::rectangle()
{
    width=length=1;

}
void rectangle::setwidth(float w)
{
    if(width>0.0&&width<20.0)
        width =w;
    else throw invalid_argument("not in range");
}
float rectangle::getwigth()
{

    return width;

}
void rectangle::setlength(float l)
{
    if(length>0.0&&length<20)
        length =l;
    else throw invalid_argument("not in range");
}
float rectangle::getlength()
{
    return length;
}
void rectangle::area()
{
    if(length>0.0&&length<20&&width>0.0&&width<20.0)
        cout<<"area = "<< length*width<<endl;
    else throw invalid_argument("not in range");

}
void rectangle::primeter()
{
    if(length>0.0&&length<20&&width>0.0&&width<20.0)
        cout<< "primeter = "<<2*(length+width) ;
    else throw invalid_argument("not in range");

}


int main()
{
    rectangle x;
    x.setlength(12);
    x.setwidth(12);
    x.area();
    x.primeter();
    return 0;
}
