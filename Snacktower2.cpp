#include<iostream>
using namespace std;
int main()
{

    long long x;
    cin>>x;
    long long n[x],k[x+1]= {0},mx=x;
    for(long long i=0; i<x; i++)
    {
        cin>>n[i];
        if(mx!=n[i])
        {
            long long s=n[i];
            k[s]=1;
            cout<<endl;
        }
        else
        {
            cout<<n[i]<<" ";
            mx--;
          for(long long j=0;j<x;j++)
            if(k[mx]==1)
            {

                cout<<mx<<" ";

                mx--;
            }
            else
                break;
             cout<<endl;
        }


    }






    return 0;
}
