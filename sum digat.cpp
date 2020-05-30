#include<iostream>
using namespace std;
int main()
{
       int x;
   int sum=0;
   int y;
   cin>>x;
   while(x>9){
   while(x>0)
   {
       y=x%10;
       sum+=y;
       x=(x-y)/10;
   }

    cout<<sum;
    x==sum;
   }












    return 0;

}
