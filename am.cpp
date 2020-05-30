#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int y, a[5]={0}, n, flag=0, i;
    cin>>y);
    n=y;
    while(1) {
        n++;
        y=n;
        i=0;
        flag=0;
        while(y>0) {
            a[i]=y%10;
            y/=10;
            i++;
        }
       /* for(int j=0; j<3; j++) {
            for(int k=j+1; k<4; k++) if(a[j]==a[k]) {flag=1; break;}
            if(flag==1) break;
        }*/
        for(int i=0;i<3;i++)
        {
            for(int y=i+1;y<4;y++)
            {
                if(a[i]==a[y])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
        }

        if(flag==0) break;
    }
    for(int j=3; j>=3; j--) printf("%d", a[j]);
    return 0;
}
