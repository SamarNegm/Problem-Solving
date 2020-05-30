#include<iostream>
int currrntTotal[200000];
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int h[n],total=0;
    for(int i=0;i<n;i++){
        cin>>h[i];
        total+=h[i];
        currrntTotal[i]=total;
    }
        int ansN=INT_MAX,ans=0,temp=0;
    for(int i=0;i<n-k+1;i++)
    {
        int sum=0;
        temp=currrntTotal[i+k-1]-currrntTotal[i];
        sum=h[i]+temp;
        //cout<<"sum "<<sum<<endl;

        if(sum<ansN){
            ansN=sum;
            ans=i;
        }
    }
    cout<<++ans;
}
/*
-----------x
-----------z--------y
                س





                معايا
                من
                y ل
                لاخر
                ومن
                x
                للاخر
                اقدر
                اجيب
                س
                y-x
                */
