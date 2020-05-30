#include<iostream>
#include<string>
#include<stdlib.h>
#include<cmath>
using namespace std;
char s[1001],temp[1001];
int leno(char x)
{
    int sum=0;
    for(int i=0; s[i]; i++)
        sum++;
    return sum;
}

int main()
{

    cin>>s;
    int l=leno(s[1001]);

    if(l%2!=0)
        l++;
    cout<<l<<" l \n";
    for(int k=0; k<l; k++)
        temp[k]=s[k];
    while(1==1)
    {
        int j=l/2,i=l/2+1;
        int t=j;
        for(int k=0,z=0; k<l; k++,z++)
        {
            if(z<l/2)
                temp[z]='4';
            else
                temp[z]='7';
        }
        long long a=(long long)atoll(temp),b=(long long)atoll(s);
// cout<<a<<" a  b "<<b<<endl;
        cout<<" samar "<<temp<<endl;
        if(a>=b)
        {

            cout<<temp;
            // break;
            return 0;
        }

        else
        {
            for(int m=0; m<l/2; m++)
            {
                for(int k=0; k<l/2; k++)
                {
                    swap(temp[j-1],temp[i-m]);
                    cout<<"temp j "<<temp<<" "<<j<<" "<<i-1<<endl;


                if(atoll(temp)>=atoll(s))
                {
                    cout<<temp<<"kkk";
                    return 0;
                }
                else
                    j--;
                }
                i++;
                t--;
                j=t;

            }

        }

l+=2;

    }

}


