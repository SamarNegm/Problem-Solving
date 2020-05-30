#include<iostream>
using namespace std;
int n;
int a[1000];
void input(int a[])
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void output(int a[])
{
   for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
}
void sortArr(int a[])
{
  for (int i=0; i<n; i++)
  {
      for(int j=0; j<(n-i-1); j++)
        {
            if (a[j]>=a[j+1])
               swap(a[j],a[j+1]);

        }
  }
}

int main()
{
    cin>>n;
   input(a);

   sortArr(a);
    output(a);
}
