#include<iostream>
using namespace std;
int main()
{
    int a,b,x;
    cin>>a>>b>>x;
    string s1="10",s2="01",s;
    if(a>b)
        s=s1;
    else
        s=s2;
    if(x%2==0)
    {
        if(b>a)
        {
            for(int i=0; i<(x)/2; i++)
                cout<<"10";
            for(int i=x/2; i<a; i++)
                cout<<"0";
            for(int i=x/2; i<b; i++)
                cout<<"1";
        }
        else
        {
            for(int i=0; i<(x)/2; i++)
                cout<<"01";
            for(int i=x/2; i<b; i++)
                cout<<"1";
            for(int i=x/2; i<a; i++)
                cout<<"0";


        }


    }
    else
    {
   if(a>b)
        {
            for(int i=0; i<(x)/2; i++)
                cout<<"10";
            for(int i=x/2; i<b; i++)
                cout<<"1";
            for(int i=x/2; i<a; i++)
                cout<<"0";
        }
        else
        {
            for(int i=0; i<(x)/2; i++)
                cout<<"01";
            for(int i=x/2; i<a; i++)
                cout<<"0";
            for(int i=x/2; i<b; i++)
                cout<<"1";


        }


    }




    return 0;
}
