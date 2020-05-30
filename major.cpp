#include<iostream>
using namespace std;
using namespace std;
int main()
{
    float a,b,c;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        cout<<a<<" eh o major"<<endl;
    }
    else if(b>a&&b>c)
    {

        cout<<b<<" eh o major"<<endl;
    }

    else
    {
        cout<<c<<" eh o major"<<endl;
    }

    return 0;
}
