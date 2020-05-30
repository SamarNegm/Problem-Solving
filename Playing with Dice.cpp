#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int f,s,fw=0,drw=0,sw=0;
    cin>>f>>s;
    for(int i=1;i<=6;i++)
    {
        if(abs(f-i)<abs(s-i))
            fw++;
        else if(abs(s-i)<abs(f-i))
            sw++;
        else if(abs(s-i)==abs(f-i))
            drw++;
    }


   cout<<fw<<" "<<drw<<" "<<sw;
}
