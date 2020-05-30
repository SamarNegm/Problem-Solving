#include<iostream>
using namespace std;
int n;
int x;

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
  for (int i=0; i<x; i++)
  {
      for(int j=0; j<(x-i-1); j++)
        {
            if (a[j]<=a[j+1])
               swap(a[j],a[j+1]);

        }
  }
}
int main()
{
    cin>>n;
sortArr(a);
output(a);


}
