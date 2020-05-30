#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int a,b,sum=0,m,n;
    cin>>n>>m;
    for(int i=0; i<=min(m,n); i++)
    {

        for(int j=i+1; j<=min(m,n); j++)
        {

            if((i*i+j)==m||(i*i+j)==n)
            {
                //if(j!=i)
                if((j*j+i)==m||(i+j*j)==n)
                {
                    sum++;
cout<<i<<" "<<j<<endl;
                }
            }
        }
    }
    cout<<sum;


    return 0;
}
