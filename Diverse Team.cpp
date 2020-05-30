#include<iostream>
#include<vector>
using namespace std;
int a[100000],ans;
int main()
{

vector<int>s;
int x,y,b;
cin>>x>>y;
for(int i=1;i<=x;i++){
    cin>>b;
    if(a[b]==0)
    {
        a[b]++;
        ans++;
        s.push_back(i);
    }

}
if(ans>=y)
{
    cout<<"YES\n";
    for(int i=0;i<y;i++)
        cout<<s[i]<<" ";

}
else
    cout<<"NO";





    return 0;
}
