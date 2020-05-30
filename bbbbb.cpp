#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;

    int x;
      cin>>n;
   string w[100];


    if(n<=100&&n>=0)
    {
        for(int i=0; i<n; i++)
        {
            cin>>w[i];
        }


for(int i=0;i<n;i++)
{
            x=w[i].length();
        if(x>10)
        {

            cout<<w[i].at(0)<<x-2<<w[i].at(x-1)<<"\n";
        }
        else
        {
            cout<<w[i]<<"\n";
        }

        }

    }

return 0;
}

