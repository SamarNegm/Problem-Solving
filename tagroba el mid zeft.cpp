#include <iostream>
#include<cmath>

using namespace std;

int main()

{
    int totalrow=5;
    int row,colspace,colstar;

    for( row=1; row<totalrow; row++)
    {

        for(colspace=(totalrow-row); colspace>=1; colspace--)
        {

            cout<<" ";


        }
        for(colstar=1; colstar<=(2*row-1); colstar++)
        {
            cout<<"*";

        }

        cout<<endl;
    }



for(int i=0;i<9;i++)
{
    cout<<"*";
}cout<<endl;
int row2,colspace2,colstar2;
    for(row2=1;row2<=totalrow;row2++)
    {
        for(colspace2=1;colspace2<=row2;colspace2++)
        {
            cout<<" ";
        }


        for(colstar2=row2;colstar2<=(9-2*row2);colstar2++)
        {
            cout<<"*";
        }

cout<<endl;}

    return 0;
}
