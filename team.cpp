#include<iostream>
using namespace std;
 int main()
 {
     int n,cont=0,x,y,z;
     cin>>n;
     for(int i=0;i<n;i++)
     {
         cin>>x>>y>>z;
         if((x==1&&y==1)||(x==1&&z==1)||(z==1&&y==1))
            cont++;
     }
     cout<<cont;
 }
