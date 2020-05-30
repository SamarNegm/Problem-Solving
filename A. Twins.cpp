#include<iostream>
using namespace std;
int main()
{
    int n,i,mx=0,sum=0,t=0,fi=1;
    cin>>n;
    int x [n];
    for(int i=0; i<n; i++)
    {

        int y;
        cin>>y;
        x[i]=y;
        sum=sum+y;
        if(y>mx)
        {
            mx=y;
            fi=sum/mx;

        }
        if(y==mx)
        {


            t=t+1;
            int num=0;

            for(int i=0; i<t; i++)
            {
                num=num+mx;
            }
            fi=num/t;

        }


    }
    cout<<fi;



    return 0;
}
