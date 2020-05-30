#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int m,n,d,sum=0;
    cin>>n>>d;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    sum+=a[i];
    }
         for ( int i = 0 ; i < n ; ++i )
    {
        for ( int j = 0 ; j < n - i - 1 ; ++j )
            if ( a [ j ] >= a [ j + 1 ] ){
                swap ( a [ j ], a [ j + 1 ] ) ;

            }
    }
    cin>>m;
    if(m==n)
        cout<<sum;
    else if(m<n)
    {
        int sum2=0;
        for(int i=0;i<m;i++)
        sum2+=a[i];
        cout<<sum2;


    }

    else if(m>n)
    {
        cout<<sum-d*(m-n);
    }

    return 0;
}
