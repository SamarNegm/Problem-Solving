#include<iostream>
#include<string>
using namespace std;
int main()
{
    int a[4],d,sum=0;;
    string s;
    cin>>a[0]>>a[1]>>a[2]>>a[3];
    cin>>s;
    for(int i=0,j=0;i<s.length();i++)
    {
        if(s[i]=='1')
        {
            sum+=1*a[0];
        }
        else if(s[i]=='2')
        {
            sum+=a[1];
        }
        else if(s[i]=='3')
        {
            sum+=a[2];
        }
        else
            sum+=a[3];

    }
    cout<<sum;





    return 0;
}
