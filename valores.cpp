#include<iostream>
using namespace std;
int main()
{

    int A,B,C,D;
    cin>>A>>B>>C>>D;

    if(B>C&&D>A&&(C+D)>(A+B)&&C>0&&D>0&&A%2==0)
    {


        cout<<" valores  aceitios";
    }

    else
    {
        cout<<" valores nao aceitoes";
    }





    return 0;
}
