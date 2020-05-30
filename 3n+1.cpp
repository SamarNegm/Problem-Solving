#include<iostream>
using namespace std;
int main()
{
    int n;
    int x=0;
    int i,j,mx=0;
    while  ( cin>>n>>j)
    {
        for(int i=n; i<j; i++)
        {
            int t=i;
            while(i!=1)
            {
                if(i%2==0)

                {
                    i=i/2;

                    x=x+1;
                    if(i>mx)
                        mx=i;

                }
                else if(i%2!=0)
                {
                    i=3*i+1;
                    x=x+1;

                    if(i>mx)
                        mx=i;

                }
                t=0;
            }

        }
          cout<<n<<" "<<j<<" "<<x<<" "<<mx;


    }







    return 0;
}
