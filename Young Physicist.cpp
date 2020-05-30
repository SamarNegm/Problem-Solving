#include<iostream>
using namespace std;
int main()
{
    int n,cont=0;
    cin>>n;
    int x[n],y[n],z[n],sumx=0,sumy=0,sumz=0;
    for(int i=0;i<n;i++)
    {

            cin>>x[i]>>y[i]>>z[i];
            sumx+=x[i];
            sumy+=y[i];
            sumz+=y[i];

    }
    if(sumx==0&&sumy==0&&sumz==0)
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
