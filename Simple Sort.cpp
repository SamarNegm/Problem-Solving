#include <iostream>
using namespace std;
int main()
{
    int a,b,c,max1,max2,max3;
    cin>>a>>b>>c;
    if(a>b&&a>c)
    {
        max1=a;
        if(b>c)
        {
            max2=b;
            max3=c;
        }
        else
        {
            max2=c;
            max3=b;
        }
    }
    if(b>a&&b>c)
    {
        max1=b;
        if(a>c)
        {
            max2=a;
            max3=c;
        }
        else
        {
            max2=c;
            max3=a;
        }
    }
    if(c>a&&c>b)
    {
        max1=c;
        if(a>b)
        {
            max2=a;
            max3=b;
        }
        else
        {
            max3=a;
            max2=b;
        }
    }

    cout<<max3<<endl<<max2<<endl<<max1<<endl<<endl<<a<<endl<<b<<endl<<c<<endl;








    return 0;



}
