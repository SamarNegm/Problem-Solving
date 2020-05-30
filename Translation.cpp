#include<iostream>
#include<string>
using namespace std;
int main()
{
string x,y;
int b=1;
cin>>x>>y;
for(int i=0;i<x.length();i++)
{
    if(x[i]!=y[x.length()-i-1])
    {
        b=0;
        break;
    }

}
cout<<(b==1?"YES":"NO");




    return 0;
}
