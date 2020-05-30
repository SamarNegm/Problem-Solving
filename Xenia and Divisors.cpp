#include<iostream>
using namespace std;
int main()
{
    int n,t1=0,t2=0,t3=0,t4=0,t6=0,x;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(x==1)
            t1++;
            else if(x==2)
            t2++;
        else if(x==3)
            t3++;
        else if(x==4)
        t4++;
        else if(x==6)
            t6++;
    }

    if(n/3==t1&&n/3==t2+t3&&n/3==t4+t6&&t3<=t6){
        for(int i=0;i<n/3;i++){
            cout<<1<<" ";
            if(t2>0){
            cout<<2<<" ";
            t2--;
            }
            else
                cout<<3<<" " ;
            if(t4>0)
            {
                cout<<4<<endl;
                t4--;
            }
            else
                cout<<6<<endl;}

    }
    else
        cout<<-1;

}
