#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    string w ;
    int x;

    cin>>n;
    if(n<=100&&n>=0)
    {



        for(int i=0; i<n; i++)
        {

            cin>>w;
            x=w.length();


        if(x>10)
        {

            cout<<w[0]<<x-2<<w[x-1];
        }
        else
        {
            cout<<w;
        }
        }

    }
return 0;
}
