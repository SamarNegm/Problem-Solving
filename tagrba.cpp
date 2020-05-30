#include<iostream>
using namespace std;
class tagrba
{
    private:
   int frist;
   int scnd;
   public:
   tagrba (int,int);
   int bigger();
};
tagrba ::tagrba(int x, int y)
{
    frist=x;
    scnd=y;
}
int tagrba::bigger()
{
    if (frist>scnd)
    cout<<frist;
    else
        cout<<scnd;
}
int main()
{
    tagrba s(3,2);
    s.bigger();
}


