#include<iostream>
using namespace std;
long long a_g_b(long long a,long long b)
{
   return a%=2*b;
}
long long b_g_a(long long a,long long b)
{
    return b%=2*a;
}

int main()
{
    long long a,b,y=0,x=0;
    cin>>a>>b;
    while(true){

            if(a>=2*b){
                    x=a;
           a= a_g_b( a, b);
            }
           else if(b>=2*a){
                  y=b;
           b=b_g_a(a,b);
           }
     //      cout<<a<<" "<<b<<" "<<x<<" "<<y<<endl;

           if(b==0||a==0)
            break;
            if(x==a&&y==b)
                break;
            else if(a<2*b&&b<2*a)
                break;


    }
    cout<<a<<" "<<b;

    return 0;
}
