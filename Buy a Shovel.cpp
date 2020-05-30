#include<iostream>
using namespace std;
int main()
{
    int k,r;
    cin>>k>>r;
    if(r>=k)
    {
        for(int j=1;j<1000;j++)
        {
            if(k*j%10==0)
              {
                  cout<<j;
                  break;
              }
              if(r%k==0)
              {
                  cout<<r/k;
                  break;
              }

        }

    }
    else
    {
        for(int i=1; i<1000; i++)
        {
            if(((k*i)-r)%10==0||(k*i)%10==0)
            {
                cout<<i;
                break;

            }
        }
    }
    return 0;
}
