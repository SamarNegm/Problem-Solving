#include<iostream>
using namespace std;
int main()
{int sum=0,x,a,b;
    cin>>x;
    for(int i=0;i<x;i++){
            sum=0;
        cin>>a>>b;
        for(int y=a;y<=b;y++)
        {
            if(y%2!=0)
                sum+=y;

        }
        cout<<"case "<<i+1<<": "<<sum<<"\n";
    }

    return 0;
}
