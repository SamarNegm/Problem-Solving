#include<bits/stdc++.h>
using namespace std;
bool cpm(string s2,string s1)
{
    if(s1.length()>s2.length())
        return true;
    return false;
}
bool is_sub(string s1,string s2)
{
    for(int i=0;i<s1.length();i++)
    {
        int j=0;
        for(int k=i;j<s2.length();j++,k++)
        {
            if(s1[k]!=s2[j]){
                    j--;
            break;
            }


        }
        if(j==s2.length())
            return true;

    }
     return false;
}
vector<string>v;
int main()
{
    int x;
    string s;
    cin>>x;
    for(int i=0;i<x;i++)
        {
            cin>>s;
            v.push_back(s);
        }
    sort(v.begin(),v.end(),cpm);
    for(int i=0;i<x-1;i++)
    {

        if(!is_sub(v[i+1],v[i]))
        {
            cout<<"NO"<<endl;;
            return 0;
        }
    }
cout<<"YES\n";
for(int i=0;i<x;i++)
    cout<<v[i]<<"\n";





    return 0;
}
