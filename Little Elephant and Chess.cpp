#include<iostream>
#include<string>
using namespace std;
int main()
{
    string a[8];
    int b1=0,b2=0,b11=0,b22=0;
    for(int i=0; i<8; i++)
    {
        cin>>a[i];
        for(int j=0; j<8; j++)
        {

            if(a[i][j]=='W')
            {

                if(j+1<8)
                {
                    if( a[i][j+1]=='B')
                        b1++;
                }
                else
                    b1++;
            }
            //  cout<<b1<<endl;
            if(a[i][j]=='B')
            {
                if(j+1<8)
                {
                    if( a[i][j+1]=='W')
                        b2++;
                }
                else
                    b2++;
            }
            //cout<<b1<<endl;;
            if(b1==1)
            {
               // cout<<"hi\n";
                b11++;
            }
            if(b2==1)
            {
                //cout<<"bi\n";
                b22++;
            }
            b1=0;
            b2=0;
        }}
   //     cout<<b11<< " "<<b22;
        cout<<((b11==32&&b22==32)?"YES":"NO");





        return 0;
    }
