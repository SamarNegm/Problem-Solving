#include<iostream>
using namespace std;
int star(int m,int k)
{

    int  j=k;
    if(k==6)
    {

        return 0;
    }
      cout<<"*";

        if(m>0)
        {
            return star(m-1,k);
        }
        if(m==0)
        {
            cout<<"\n";//j = "<<j<<"   ";
            return star(j+1,k+1);
        }
}
int main()
{
    int x=star(0,0);
}
