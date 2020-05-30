#include<iostream>
using namespace std;
int main()
{
    long long m ,n,a,i=0,j=0;;
    cin>>m>>n>>a;

          i=  n/a;
        if(n%a!=0)
            i++;
           j= m/a;
           if(m%a!=0)
            j++;

    cout<<j*i;
    return 0;
}
