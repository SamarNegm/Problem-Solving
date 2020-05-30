#include<iostream>
using namespace std;
int a[100001],b[100001];
int main()
{
    int x,cont=0,p;
    cin>>x;
    cin>>a[0]>>b[0];
    p=a[0]-b[0];
    cont++;

    for(int i=1;i<x;i++)
    {

        cin>>a[i]>>b[i];

    }
    for(int i=1;i<x;i++)
    {
        if((a[i]-b[i])>a[i-1]&&(a[i]-b[i])>p)
        {
            cont++;
            p=(a[i]-b[i]);
        //  cout<<a[i]<<" "<<p<<endl;
        }
        else if((a[i]+b[i])<a[i+1]||a[i+1]==0)
        {
            cont++;
            p=(a[i]+b[i]);
      //  cout<<a[i]<<" ca "<<p<<endl;
        }

    }
cout<<cont;




    return 0;
}
