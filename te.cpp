#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>
#include <deque>
#include <math.h>
#include <cstring>
#include <string.h>
#include <iomanip>
#include <stdlib.h>
#include <queue>
#include <stack>
#include<cassert>
#include <cfloat>
using namespace std ;
#define ll long long
#define submitStage int TCF = 1 ;
#define testStage int TCF = 1000 ;
#define testMyStupedCode TCF--

#define INF			1011111111
#define FI(n) for(int i=0;i<n;i++)
void FastInputOutput()
{
    ios_base :: sync_with_stdio( 0 ) ;
    cin.tie( 0 ) ;
    cout.tie( 0 ) ;
}
int a[10001];

int main()
{
    long long s, n, l, r, x,flag=0,t;
    cin>>t;
    while(t--){
    cin >> s >>n;
    FI(n) cin >> a[i];
    for (int i = 0;i < (1<<n); ++i){
        long long sum = 0;
        int mask = i;
        for (int j = 0; j < n; ++j) {
            if (mask & (1<<j)) {
                sum += a[j];
            }
           // cout<<i<<" 1\n ";
        }
      //  cout<<i<<"  2\n";
        if (sum == s )
        {
            cout<<"YES\n";

    flag=1;
    break;
        }
    }
    if(flag==0)
        cout<<"NO\n";
        flag=0;
    }
    return 0;
}

