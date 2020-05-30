#include<iostream>
using namespace std;
int main()
{
    int x;
      cin>>x;
   while(x>9){
   while(x>0)
   {
       y=x%10;
       sum+=y;
       x=(x-y)/10;
   }
}
