#include<iostream>
using namespace std;
#define ll long long
long long vst [ 20000005 ];
bool prim[10000000];

void seiv(){
    prim[1]=1;
    for( long long i = 2 ; i <= 2000005; ++i ){
         if( vst[ i ] )
            continue ;
            prim[i]=1;
      // cout<<i<<endl;
        for( ll j = 1LL * i * i ; j <= 2000005; j += i )
            vst[ j ] = 1 ;
    }
}
int main()
{
     seiv();
        string s;
   while(getline(cin,s))
   {
long long c=0;

       for(int i=0;i<s.length();i++)
       {
           if(s[i]>='a'&&s[i]<='z')
            c=c+s[i]-'a'+1;
           else
            c=c+s[i]-'A'+27;
         //  cout<<c<< "  "<<s[i]-'a'<<endl;
       }
       cout<<(prim[c]==1?"It is a prime word.\n":"It is not a prime word.\n");

   }



    return 0;
}
