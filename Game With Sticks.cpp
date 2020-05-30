#include<iostream>
using namespace std;
int main()
{
    int m,n,x=0,winner=0;
    cin>>m>>n;
    while(1==1)
    {
        if(--m>=0&&--n>=0)
        {
           winner=1;

        }
        if(m>0&&n>0){
            winner=2;
            m--;
            n--;
        }
                 if(m<=0||n<=0)
        {
            break;
        }

    }
   if(winner==2)cout<<"Malvika";
          else
            cout<<"Akshat";




    return 0;

}
