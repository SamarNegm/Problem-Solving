#include<iostream>
#include<cmath>
#include<string>
long long a[200000];
using namespace std;
int main()
{
    long long  x,m=0,d, c = 1 ;
    string n1,n2;
    cin>>x;

    for(int j=0;j<x;j++)
    { cin>>n1>>n2;
    cin>>d;
      bool flag = true;
      int l = d*d ;
        for(int i=0 ; i < l ;i++)
        {
            cin>>a[i];
            if(a[i] < 0 )
                flag = false ;
        }
        if(!flag)
        {
         cout <<"Test #"<<c++<<": Non-symmetric."<<endl;
         continue ;
        }
        for(int k=0;k<(d*d)/2+1;k++)
        {
            if(a[k]==a[d*d-k-1])
            {
                m=1;
            }
            else
            {
                m=0;
                break;

            }
        }
          if(m==1)
            {
                cout <<"Test #"<<c++<<": Symmetric."<<endl;

            }
            else
                cout <<"Test #"<<c++<<": Non-symmetric."<<endl;


    }

    return 0;
}

