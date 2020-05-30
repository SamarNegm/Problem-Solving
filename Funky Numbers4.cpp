#include<iostream>
#include <cmath>
#include<vector>
using namespace std;
int main()
{
        long long y;
        vector<int>a;
  cin>>y;


    for(long long i=(sqrt(y)*2);i>0;i--)
    {
        if((i*(i-1))/2>y)
         continue;
    else
        a.push_back((i*(i-1))/2);
    }
    for( int i=0;i<a.size();i++)
    {
        for(int j=i;j<a.size()-1;j++)
        {
            if(a[i]+a[j]==y)
            {
              //  cout<<i <<" "<<j<<" "<<a[i]<<" "<<a[j];
                cout<<"YES";
                return 0;
            }
        }
    }
    cout<<"NO";





    return 0;
}
