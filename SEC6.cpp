#include<iostream>
using namespace std;
int main()
{

    int a,b,c,d;
    cout<<"enter a ,b ,c, d \n";
    cin>>a>>b>>c>>d;

    if(a>b&&a>c&&a>d)
        cout<<a<<" is bigger";
    else if(b>a&&b>c&&b>d)
        cout<<b<<" is bigger";
    else if(c>a&&c>b&&c>d)
        cout<<c<<" is bigger";
    else
        cout<<d<<"  is bigger";




    return 0;
}
