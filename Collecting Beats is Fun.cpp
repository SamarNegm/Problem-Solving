#include<iostream>
using namespace std;
int a[100];
int main()
{
 char b[16];
 int k;
 int z;
 bool flag =0;
 cin>>k;
 for(int i=0;i<16;i++)
 {
     cin>>b[i];
     if(b[i]>='1'&&b[i]<='9')
     {
        z= ++a[b[i]];
        if(z>k*2)
        {
            flag=1;
            break;
        }

 }
 }
 cout<<(flag ==0?"YES":"NO");
    return 0;
}
