#include<iostream>
using namespace std;
int main()
{
   int n,c=0;
   cin>>n;
   int y[n];
   for(int i=0;i<n;i++)
   {
       cin>>y[i];
   }
   for(int i=0;i<n;i++)
   {
       if((y[i]!=y[i+1])){
        c++;

       }

   }
   cout<<c;


    return 0;
}
