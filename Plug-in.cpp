#include<iostream>
#include<string>
int a[27];
int b[27];
using namespace std;
int main()
{
    int k=0;
string s;
cin>>s;
for(int i=0;i<s.length();i++)
{
     b[(int)(s[i]-'a')]++;
    if(b[(int)(s[i]-'a')]==1){
     a[k]=(int)(s[i]-'a');
    k++;}


}
    for(int j=0,l=0;j<26,l<k;j++,l++)
    {
       if(b[a[l]]%2==1)
        cout<<(char)(a[l]+'a');

    }
    return 0;
}
