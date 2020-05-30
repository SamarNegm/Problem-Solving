#include<iostream>
#include<cmath>
int a[100000];
using namespace std;
int main()
{
    float m,n;
    int mid,mid2;
    int j=0;
    cin>>n>>m;
    mid=ceil(m/2);
    mid2=(m/2)+1;
    //cout<<mid<<endl;
    a[0]=mid;
    j++;
    if((int)m%2==0)
    {
        a[1]=mid2;
        j++;
    }
    int f;
    ((int)m%2==0?f=1:f=0);
    for(int i=1; j<=m-2; i++)
    {
        //cout<<"hi\n";
        if((int)m%2!=0)
        {
            a[j]=mid-i;
            j++;
            a[j]=mid+i;
            j++;
        }
        if((int)m%2==0)
        {
            a[j]=mid-i;
            j++;
            a[j]=mid2+i;
            j++;

        }

    }
    int flag =1;
    if (j>=n)
    {
        for(int i=0; i<n; i++)
            cout<<a[i]<<"\n";

        return 0;
    }
    //cout<<j<<endl;

        for(int i=j-1;;)
        {
            for(int k=0;k<m;k++){
            a[j]=a[k];
            i++;
            j++;
         //   cout<<"hi\n";
            if(i>n){
                flag=0;
            break;}
            }
            if (flag ==0)
                break;
    }
    for(int i=0; i<n; i++)
        cout<<a[i]<<"\n";





    return 0;
}

