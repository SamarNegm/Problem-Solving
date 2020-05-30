#include<iostream>
using namespace std;
int main()
{
  int a,sum1=0,sum2=0,sum3=0;
  cin>>a;
  int x[a],ans1[a],ans2[a],ans3[a];
  for(int i=0,a1=0,a2=0,a3=0;i<a;i++)
  {
      cin>>x[i];
      if(x[i]==1)
      {
          sum1++;
          ans1[a1]=i+1;
          a1++;
      }
      else if(x[i]==2)
      {
          sum2++;
          ans2[a2]=i+1;
          a2++;
      }
      else if(x[i]==3)
       {

        sum3++;
        ans3[a3]=i+1;
          a3++;
  }}
  int z=min(min(sum1,sum2),sum3);
  if(z>0){
        cout<<z<<endl;
  for(int j=0;j<z;j++){
 cout<<ans1[j]<<" "<<ans2[j]<<" "<<ans3[j]<<endl;
  }
  }
  else
    cout<<0;
    return 0;
}
