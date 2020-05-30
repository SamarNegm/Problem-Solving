#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main()
{
   string s;
   cin>>s;
   int sum=0,sum2=0,flag=0;
   for(int i=0;i<s.length();i++)
   {
       if(s[i]=='-'&&flag==0){
        sum++;
       }
       else {
        flag =1;
        if(s[i]=='+')
            sum++;
        else
            sum--;
       }

   }
if(flag ==0)
    cout<<sum;
else
    cout<<sum-1;



    return 0;
}
