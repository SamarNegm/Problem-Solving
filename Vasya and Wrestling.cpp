#include<iostream>
using namespace std;
 long long ss[200001],ff[200001];
int main()
{
    int x,n,a=0,b=0,flag=0;
    cin>>n;
    long long s=0,f=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x>0)
        {
        ff[a]=x;
            f+=x;
            a++;
        }
        else if(x<0)
        {
           s+=x;
           ss[b]=x;
           b++;

        }

    }
    if(-1*s>f)
        cout<<"second";
    else if(f>-1*s)
        cout<<"first";
    else if(f==-1*s)
    {
        for(int i=0;i<min(a,b);i++){
            if(ff[i]>-1*ss[i])
            {
                cout<<"first";
                flag=1;
                break;

            }
            else if(ff[i]<-1*ss[i]){
                cout<<"second";
                flag=1;
            break;
            }
        }
        if(flag==0)
            if(x<0)
            cout<<"second";
        else
            cout<<"first";
    }

    return 0;
}
