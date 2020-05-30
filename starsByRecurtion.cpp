#include<iostream>
using namespace std;
 void star(int n,int m)
    {
        if(n>0){
        cout<<"*";
        }



        else
        {
            if(m==0)
                cout<<"\n";
            else{
                star(n, m-1);
            }
            star(n-1,m);

        }

    }
int main()
{

star(4,4);





    return 0;
}
