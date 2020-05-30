#include<iostream>
using namespace std;
int main()
{

    int x,h,m,s;
    cin>>x;

    m=(x%(60*60))/60;
  h=x/(60*60);
    s=(x%(60*60))%60;
    cout<<h<<":"<<m<<":"<<s<<endl;

    return 0;
}
