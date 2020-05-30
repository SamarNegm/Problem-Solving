#include<iostream>
using namespace std;
int main()
{
 int x,l,r,shoot_num;
 cin>>x;
 int b[x+1]={0};
 for(int i=1;i<=x;i++ )
 {
     cin>>b[i];
 }
 cin>>shoot_num;
 for(int i=1;i<=shoot_num;i++)
 {
     cin>>l>>r;
     if(l!=1&&l!=x)
     {
         b[l-1]=b[l-1]+(r-1);
         b[l+1]=b[l+1]+(b[l]-r);
          b[l]=0;
     }
     if(l==1)
     {
         b[l+1]=b[l+1]+(b[l]-r);
         b[l]=0;
     }
     if(l==x)
     {
         b[l-1]=b[l-1]+(r-1);
         b[l]=0;
     }
 }
 for(int i=1;i<=x;i++)
 {
     cout<<b[i]<<endl;
 }






    return 0;
}
