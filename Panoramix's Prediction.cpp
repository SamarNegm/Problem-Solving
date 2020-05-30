#include<iostream>
#include<cmath>
using namespace std;
int is_prim(int y)
{
    int x=0;
  for(int i=2;i<=sqrt(y);i++)
  {
     if(y%i==0)
     {
         x=1;
         break;
     }
  }
  if(x==0)
    return 1;
  else
    return 0;
}
int main()
{
    int x,y,flag=1;
    cin>>x>>y;
    int z=is_prim(y);
   // cout<<z;
    if(z==1)
    {
        for(int j=x+1;j<y;j++)
        {
           // cout<<j<<endl;
            int k=is_prim(j);
            if(k==1)
            {
                flag=0;
                cout<<"NO";
                break;
            }
        }
        if(flag==1)
            cout<<"YES";
    }
    else
        cout<<"NO";



    return 0;
}
