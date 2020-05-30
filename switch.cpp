#include<iostream>
#include<string>
using namespace std;
int main(){
int x;
cout<<"enter your selection";

cin>>x;
 do{
switch(x){

case 1: cout<<"tea"<<endl;
    break;
case 2:
    cout<<"milk"<<endl;
    break;
case 3:
    cout<<"cofe"<<endl;
    break;
case 4:
    cout<<"banana"<<endl;
default:
    cout<<"error";}
    cin>>x;
 while(x<=5)}



}cout<<endl;
return 0;


}
