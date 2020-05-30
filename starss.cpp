#include<iostream>
using namespace std;
void s(int i,int j)
{
    cout<<"*";
    if(i==0)
        return;
    if(j==i)
    {
        cout<<"\n";
        return s(i-1,0);

    }
    return s(i,j+1);

}

int main()
{
s(5,0);

cout<<"\n";

}
