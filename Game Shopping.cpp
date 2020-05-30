#include<iostream>
using namespace std;
int aa[10000],bb[10000],ans;
int main()
{
    int a,b;
    cin>>a>>b;
    for(int i=0; i<a; i++)
    {
            cin>>aa[i];
    }
    for(int i=0;i<b;i++)
        cin>>bb[i];

for(int i=0,j=0;;)
{
    if(bb[j]>=aa[i++])
    {
        ans++;
        j++;
    }
    if(j>=b||i>=a)
        break;

}


cout<<ans;

    return 0;
}
