#include<iostream>
#include<iomanip>
using namespace std;
int main()
{

 double A,B,MEDIA;

cin>>A;

cin>>B;

  if(A<=10&&A>=0&&B<=10&&B>=0)
{



    cout<<setprecision(5)<<fixed<<"MEDIA = "<<((A*3.5)+(B*7.5))/11<<endl;



}

    return 0;
}
