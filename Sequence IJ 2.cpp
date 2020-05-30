#include <iostream>
using namespace std;
int main()
{
    for (int I=1,x=1;(I<=11 && x<6);x++,I+=2)
    {
        for (int y=1,j=7;(j>4 && y<4);y++,j--)
            cout<<"I="<<I<<" J="<<j<<endl;
    }
    return 0;
}
