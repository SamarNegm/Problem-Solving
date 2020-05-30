#include<iostream>
using namespace std;
class time
{
public:
    int empoyee(string,string);
};
int main()
{
    int hour=13;
     cout << ( (hour==1) ? 12:hour%12)<<endl;
      cout << ( ( hour == 0 || hour == 12 ) ? 12 : hour % 12 )<<endl;

int x=3;
int z=(x==3);
cout<<x<<endl;
cout<<z<<endl;

cout<<((x==3)?12:x);
    return 0;
}
