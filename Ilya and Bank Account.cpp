#include<iostream>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    if(n>0)
        cout<<n;
    else
    {
        n=n*-1;
        if(n%10>((n-n%10)/10)%10)
        {
            cout<<-1*n/10;
        }
        else
            if(-1*n/100==0)
                cout<<-1*n%10;
            else
            cout<<-1*(n/100)<<n%10;

    }


    return 0;
}
