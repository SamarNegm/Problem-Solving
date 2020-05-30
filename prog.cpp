#include<iostream>
using namespace std;
int main()
{
    int x,y;

    for(x=0; x<=9; x++)
    {
        for(y=0; y<=9; y++)
        {
            if(x!=0&&x!=9)
            {
                if(y==0||y==9)
                {
                    cout<<"* ";

                }
                else
                {
                    cout<<" ";
                }


            }
            else
            {

                cout<<"*";
            }








        }
        cout<<endl;
    }
    return 0;
}
