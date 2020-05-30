#include<iostream>
using namespace std;
int main(){

int x;
cout<<"enter the year you want to now ";
cin>>x;
if(x%4==0&&x%100!=0){

    cout<<"the year is leap year";


if((x%100==0&&x%400!=0)){
    cout<<"normal year";
}

}
else {
    cout<<"normal year";
}

return 0;

}
