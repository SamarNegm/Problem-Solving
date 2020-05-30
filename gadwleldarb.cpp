#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int x,f,i;

    for( i=1; i<=10; i++)
    {
        for (int x=i; x<=10; x++)
        {

            cout<<i<<"*"<<x<<"\t";

        }
        cout<<endl;
        for(f=i; f<=10; f++)
        {
            cout<<"-----"<<"\t";
        }
        cout<<endl;
        for (int z=i; z<=10; z++)
        {

            cout<<i*z<<"\t";
        }

        cout<<endl;
        cout<<endl;
    }






    return 0;
}
