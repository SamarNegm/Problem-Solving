
#include<iostream>
using namespace std;

class rational
{

private:
   int numerator;
   int denomintor;


public:
    float add(int ,int);
    float subtract(int, int);
   float multiplar(int,int);
   float divid(int,int);
   float reduce(int,int);

};
float rational:: reduce(int n,int d )
{
    numerator=n;
    denomintor=d;
    int gcd=0;
    for(int i=0;i<d;i++)
    {
        if(d%i==0)
        {
            gcd=i;
        }

    }
    n=n/gcd;
    d=d/gcd;
    return n,d;

}
















int main()
{


    return 0;
}
