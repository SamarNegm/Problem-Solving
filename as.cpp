#include<iostream>
using namespace std;
power(int x,int y)
{
    int sum=1;int a,b;
    cin>>a>>b;
    for(int i=0;i<b;i++)
    {
       sum=sum*a;

    }
    return sum;

}
int main()
{
    int x,y,sum;

   sum= power(x,y);
cout<<sum;
    return 0;
}
