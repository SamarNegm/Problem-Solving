#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int flag=0;
    int n;
    cin>>n;
    int res=n;
    int y[5];

    while(1)
    {
        n++;

        n=res;
        for(int i=0; i<4; i++)
        {
            y[i]=res%10;
            res/=10;

        }
        for(int i=0; i<3; i++)
        {
            for(int k=i+1; i<4; i++) if(y[i]==y[k])
                {
                    flag=1;
                    break;
                }
            if(flag==1) break;
        }
        if(flag==0) break;
    }
    for(int j=3; j>=0; j--) cout<< y[j];





    return 0;

}




