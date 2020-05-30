#include<iostream>
using namespace std;
bool is_pal(string s, int f,int l)
{

    for(int i=f,j=0;i<l;i++,j++)
    {

        if(s[i]!=s[s.length()-j-1]){

           return 0;
        }
    }
    return 1;
}
int solve(string s)
{
for(int k=0;k<s.length();k++)
{
    if((is_pal(s,k,s.length()-1))==1)
    {
return k;
    }
}

}
int main()
{
    int t;
    string s;
    cin>>t;
    while (t--)
    {

        cin>>s;
        cout<<solve(s)<<"\n";;
    }


    return 0;
}
