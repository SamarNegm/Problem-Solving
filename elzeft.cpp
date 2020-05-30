#include<iostream>
using namespace std;
int main()
{

long long z=1,x,i;
cin>>x;
for( i=1 ;i<10000000000;i++)
{
    z*=2;
   if( z>=x)
    break;
}

cout<<i;


    return 0;

}
