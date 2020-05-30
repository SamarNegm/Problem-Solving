#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long long n,m,z,j=0,cont=0,k;
    cin>>n>>m;
    long long x[100000]= {0};

    for(int i=0; i<n; i++)
    {
        int z;
        cin>>z;
        for(int s=0; s<z; s++)
        {
            cin>>k;
            x[k-1]=1;

        }

    }

    for(int i=0;i<m;i++)
   {
      if(x[i]==0)
        {cont=1;
        break;}


   }

    if(cont==0)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}
