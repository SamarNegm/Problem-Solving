#include<iostream>
using namespace std;
int main()
{
    int s,n,z=0;
    cin>>s>>n;
    int x[n],y[n];
    for(int i=0; i<n; i++)
    {
        cin>>x[i]>>y[i];
    }
       for ( int i = 0 ; i < n ; ++i )
    {
        for ( int j = 0 ; j < n - i - 1 ; ++j )
            if ( x [ j ] >= x [ j + 1 ] ){
                swap ( x [ j ], x [ j + 1 ] ) ;
                swap(y[j],y[j+1]);
            }
    }

    for(int i=0;i<n;i++)
    {
        if(s>x[i]){
            s+=y[i];
          //  cout<<"x[i] "<<x[i]<<" s "<<s<<endl;
          }
        else
        {
            z=1;
            break;
        }
    }
    if(z==0)
        cout<<"YES";
    else
        cout<<"NO";



    return 0;
}
