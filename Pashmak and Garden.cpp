#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x[4];
    for(int i=0; i<4; i++)
    {
        cin>>x[i];

    }
    int k=x[0]-x[2];
    int j=x[1]-x[3];
      int a;

            for(int i=0;i<4;i++)if (x[i]!=0)
            a=x[i];
    if(k==0||abs(k)==abs(j))
    {
           if(k==j)
            {

                cout<<x[0]<<" "<<x[2]<<" "<<x[2]<<" "<<x[0];
            }
            else
        for(int i=0; i<4; i++)
        {

            {
                if(x[i]==0)
                    cout<<a<<" ";
                else
                    cout<<0<<" ";
            }
        }
    }
    else
        cout<<-1;



    return 0;
}
