#include<iostream>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int a1=k*l;
    int a2=a1/nl;
    int a3=c*d;
    int a4=p/np;
    cout<<min(min(a2,a3),a4)/n;
}
