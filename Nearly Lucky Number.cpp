#include<iostream>
using namespace std;
int main()
{
    long long n ,sum=0;
    cin>>n;
    while (n)
    {
        if(n%10==4||n%10==7)
        {
            sum++;
          //  cout<<sum<<"n "<<n%10<<endl;
        }
            n/=10;

    }
    if (sum==4||sum==7)
        cout<<"YES";
    else
        cout<<"NO";
}
