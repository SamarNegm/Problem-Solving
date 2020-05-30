#include<iostream>
using namespace std;
int main()
{
    float x;
    float *y;
    y=&x;
    cout<<y<<"\n";
    *y=1000.9;
    cout<<x;









    return 0;
}
