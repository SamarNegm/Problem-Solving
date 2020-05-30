#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main()
{
    int sum=0;
    string s;
    getline(cin,s);
    if(s[1]>='a'&&s[1]<='z')
        sum++;
   //     cout<<sum<<" s\n";
        int x;
    for (int i =4; i<=s.length(); i+=3)
    {         x=1;
        for(int j=1; j<i;j+=3)
        {
            if(s[i]!=s[j]&&(s[j]>='a'&&s[j]<='z'))
            {
                x=1;
            }
            else
            {
                x=0;
                break;
            }
        }
        if(x==1)
            sum++;
    }


    cout<<sum;

    return 0;
}
