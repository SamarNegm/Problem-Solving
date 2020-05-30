#include<iostream>
using namespace std;
int main()
{
    int a,b,sum_even=0,sum_odd=0,n;
    cin>>a>>b;
    if(a>b)
        n=a+b+1;
    else
        n=a+b;
    for(int i=1; i<=n; i++)
    {
        if(i%2==0)
        {

             sum_even++;

        }
        else sum_odd++;
    }
    if(sum_even>=a&&sum_odd>=b&&(a!=0||b!=0))
        cout<<"YES";
    else
        cout<<"NO";


    return 0;
}
