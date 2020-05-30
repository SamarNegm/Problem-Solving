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


for(int j=0;j<n;j++)
{
            x=w[j].length();
        if(x>10)
        {

            cout<<w[j].at(0)<<x-2<<w[j].at(x-1)<<"\n";
        }
        else
        {
            cout<<w[j]<<"\n";
        }}
    }

return 0;
}
