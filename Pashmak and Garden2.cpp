#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int x[2],y[2];
    for(int i=0; i<2; i++)
    {
        cin>>x[i];
        cin>>y[i];

    }
   if(x[0]==y[0]&&x[1]==y[1])
    cout<<x[0]<<" "<<y[1]<<" "<<x[1]<<" "<<y[0];
   else if(x[1]==x[0])
    cout<<abs(y[1]-y[0])<<" "<<y[0]<<" "<<abs(y[0]-y[1])<<" "<<y[1];
   else if(y[0]==y[1])
    cout<<abs(x[1]-x[0])<<" "<<abs(x[1]-x[0])<<" "<<abs(x[0]-x[1])<<" "<<abs(y[0]-y[1]);
   else if(abs(y[1]-y[0])==abs(x[0]-x[1]))
   cout<<x[0]<<" "<<y[1]<<" "<<x[1]<<" "<<y[0];
    else
        cout<<-1;



    return 0;
}
