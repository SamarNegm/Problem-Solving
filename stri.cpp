#include<iostream>
#include<string>
#include<stdlib.h>
#include<cmath>
using namespace std;
char s[1001],temp[1001],temp2[1001];
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
    while(1==1)
    {
        int j=l/2-1,i=l/2-1;
        for(int k=0,z=0; k<l; k++,z++)
        {
            if(k<l/2)
                temp[z]='4';
            else
                temp[z]='7';
            temp2[z]=temp[z];
        }
        long long a=(long long)atoll(temp),b=(long long)atoll(s);
        if(a>=b)
        {

            cout<<temp;
            return 0;
        }

        else
        {
            cout<<" j "<<j<<endl;;
            for(int t=0;t<l/2;t++)
            {
                j=l/2-t;
                for(int f=0;f<l/2-1;f++)
                {
                    cout<<temp[j+1]<<endl;
                    swap(temp[j],temp[j+1]);
                    j++;
                    cout<<temp<<endl;
                }

            }
            temp[0]='7';
            for(int i=0;i<l-1;i++)
            {
                if(i<l/2)
                    temp[i]='4';
                else
                    temp[i]='7';

            }
            cout<<temp<<endl;;
            if(atoll(temp)>=atoll(s))
            {
                cout<<temp;
                return 0;
            }
            for(int t=0;t<l/2-1;t++)
            {
                int po=l-(l/2-t);
                for(int k=0;k<l/2;k++)
                {
                    swap(temp[po],temp[po-1]);
                    po--;
                    cout<<temp<<endl;
                }

            }

            l+=2;
        }
    }

}
