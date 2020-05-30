#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main()
{
    int hf,hl,mf,ml,rsH,rsM;
    char x=':';
    cin>>hl>>x>>ml;
    cin>>hf>>x>>mf;
    if(hl>=hf)
    {
        rsH=hl-hf;
        cout<<"hi";


    }
    else if(hf>hl)
    {
        rsH=24-hf;

    }

    if(ml<mf)
    {
        rsH--;
        rsM=(60-mf)+ml;

    }
    else
    {
        rsM=ml-mf;
    }
if(rsH<0)
    rsH+=24;

    cout<<setw(2)<<setfill('0')<<rsH<<":"<<setw(2)<<setfill('0')<<rsM;
    return 0;
}
