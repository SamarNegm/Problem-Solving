#include<iostream>
#include<string>
using namespace std;
string x[]={"0","one","two","three","four","five","six","seven","eight","night","ten"};
int main()
{
    int y;
    string s;
    cin>>y;
    for(int k=0;k<y;k++)
 {
     cin>>s;

     for(int j=1;j<10;j++)
     {
              int n=0;
         int flag =0;
         for(int i=0;i<s.length();i++)
         {

             if(s[i]==x[j][i])
                n++;
             if(n==x[j].length()-1)
             {
                 cout<<j<<endl;
                 flag =1;
                 break;

             }

         }
         if(flag==1)
                break;

     }
 }





    return 0;
}
