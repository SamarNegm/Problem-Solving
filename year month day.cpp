#include<iostream>
using namespace std;
int main()
{
    int x,year,month,day;

    cin>>x;
    year=x/365;
    cout<<year<<" ano(s)"<<endl;

    month=(x%365)/30;
    cout<<month<<" mes(es)"<<endl;
    day=(x%365)%30;
    cout<<day<<" dia(s)"<<endl;





    return 0;


}
