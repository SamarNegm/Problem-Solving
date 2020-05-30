#include<iostream>
using namespace std;
int main(){
int a,b,c,d;

int x[4]={a,b,c,d};
cin>>x[1];
cin>>x[2];
cin>>x[3];
cin>>x[4];




if ((x[1]<x[2])&&(x[1]<x[3])&&(x[1]<x[4]))
    cout<<x[1];


else if ((x[2]<x[1])&&(x[2]<x[3])&&(x[2]<x[4])){
    cout<<x[2];}


else if ((x[3]<x[2])&&(x[3]<x[1])&&(x[3]<x[4])){
    cout<<x[3];}

else
    {
    cout<<x[4];}





return 0;
}
