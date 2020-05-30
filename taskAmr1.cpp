#include<iostream>
using namespace std;

int binarySearchR(int a[],int key,int n)
{

int f=0,l=n;
    int middel=(f+l)/2;
  while(true)
    {
       if(a[middel]==key)
       {
           return middel;
      //     break;
       }
       else if (l>f)
        return -1;
       else if(key>a[middel])
        l=middel-1;
       else
        f=middel+1;
         middel=(f+l)/2;
    }
    return -1;
}
int main()
{
    int n;
 //cout<<"enter the num of elm in the arr you want sort\n";

 cin>>n;
 int a[n];
 //cout<<"enter the array\n";
 for(int i=0;i<n;i++)
    cin>>a[i];
    int key;
   // cout<<"enter the num you want find\n";
    cin>>key;
int ans= binarySearchR(a,key,n);
(ans>=0?cout<<" the number you are looking for is in position "<<ans:cout<<"not founded");
    return 0;
}
/*
9
9 8 7 6 5 4 3 2 1
1*/
