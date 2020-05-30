#include<iostream>
using namespace std;
  int star(int n,int m)
  {
  cout<<"*";
      int k=n;
      if(n==1)
      {

          return 0;
      }

      {
          if(m>1)
          {
              return star(n,m-1);
          }
        if(m==1){
          cout<<"\n";
         return star(n-1,k-1);
          }

      }

  }
int main()
{



  int x=star(4,4);


    return 0;
}
