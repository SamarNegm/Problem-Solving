#include<iostream>
using namespace std;
int main(){
    int n,m,x,cont=0;
    cin>>n>>m;
    x=n+n/m;
    int z=n;
    while(1==1)
    {
        cont++;
        z--;
        if(cont%m==0)
        z++;
        if(z==0)
            break;

    }
    cout<<cont;

    return 0;


}
