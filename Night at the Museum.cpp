#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
    int sum=0,temp=0;
    char x[27]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    string s;
    cin>>s;
    for(int i=0,j=0;i<s.length();i++)
    {
       for(int j=0;j<=26;j++)
       {
           if(s[i]==x[j])
           {
               int k=temp+(26-j);
               int l=(26-temp)+j;
               int m=abs(temp-j);
               if(abs(k)<abs(l)&&k<=m)
               {
                   sum+=abs(k);
               }
               else if(l<=k&&l<m){
                sum+=abs(l);
               }
               else if(m<k&&m<=l)
                sum+=m;
               temp=j;

           }
       }

    }
    cout<<sum;

}
