#include<iostream>
using namespace std;
int main()
{
    int n,i,mx=0,sum=0,counter=0;
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
        }

        }


    for(int a=0 ;a<n;a++)
    {
        if(x[a]==mx)
        {
            counter++;


        }
    }
    if(counter==1)
    {
        cout<<sum/mx;
    }


     else if(counter=2)


        cout<<counter;




    return 0;
}
