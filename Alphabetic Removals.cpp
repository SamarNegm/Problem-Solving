#include<iostream>
using namespace std;
int a[28],aa[28];
int main()
{
    int x,total;
    cin>>x>>total;
    string s;
    cin>>s;
    for(int i=0;i<x;i++)
    {
        a[s[i]-'a']++;
    }
    for(int i=0;i<27;i++)
    {
        int w=max(a[i]-total,0);
        aa[i]=a[i]-w;
        total -=a[i];
        if(total<=0)
            break;
    }
    for(int i=0;i<x;i++)
    {
        if(aa[s[i]-'a']!=0)
        {
            aa[s[i]-'a']--;
        }
        else
            cout<<s[i];
    }

    return 0;
}
