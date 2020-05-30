#include<iostream>
using namespace std;
int main()
{
    long long  l1, r1, l2, r2 ,k;
    cin>>l1>>r1>>l2>>r2>>k;
    if((k>min(r1,r2)||k<max(l1,l2))&&min(r1,r2)-max(l1,l2)+1>0)
     {

       cout<<min(r1,r2)-max(l1,l2)+1;
     }
     else if((k<=min(r1,r2)||k>=max(l1,l2))&&min(r1,r2)-max(l1,l2)>0)
        cout<<min(r1,r2)-max(l1,l2);
    else
        cout<<0;

    return 0;
}
