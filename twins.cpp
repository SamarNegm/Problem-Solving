
#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main()
{
    int n,sum=0,sum1=0,cot=0;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];

    }

    for(int i=0; i<n; i++)
    {

        if(sum1>sum/2)
            break;
        else
        {
            sum1+=a[i];
            cot++;
        }

    }
    cout<<cot;


    return 0;
}
