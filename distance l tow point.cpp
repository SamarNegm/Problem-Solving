#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
int main()
{
    double x1,x2,y1,y2,distance;
    cin>>x1>>y1>>x2>>y2;
    distance=sqrt(((x1-x2)*(x1-x2))+((y2-y1)*(y2-y1)));
    cout<<setprecision(4)<<fixed<<
    distance<<endl;




  return 0;

}
