#include<iostream>
using namespace std;
int main()
{
int x=6,y=9;
while (y!=0)
{
    int carry=x&y;
    cout<<carry<<endl;
    x=x^y;
    y=carry;
    cout<<y<<endl;

}
cout<<x<<endl;
x=x^8;
cout<<x<<endl;


}
