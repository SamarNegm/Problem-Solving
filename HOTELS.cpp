#include<iostream>
using namespace std;

    long long x,n,m,mx,w,a[10000000],sum,j,i;
    pair<int ,int >p;


int main()
{
    cin>>x>>m;
    for(int k=1;k<=x;k++)
    {
        cin>>a[k];


    }

    while(i<=x)
    {
          sum=sum+a[i];

    while(sum>m){

               j++;
            sum-=a[j-1];
        }

            if(sum>mx){
                mx=sum;
            }
            i++;

    }

    cout<<mx;


    return 0;
}
