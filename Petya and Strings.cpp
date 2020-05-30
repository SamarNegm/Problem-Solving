#include<iostream>
#include<cstring>
#define UP_A 65
#define UP_Z 91
#define LOW_A 97
#define LOW_Z 122
using namespace std;
int main()
{
    int x;

     string word1  ;
      string word2  ;
     string lower1;
      string lower2;
    cin>>word1;
    cin>>word2;

    for(int i=0; i<word1.length(); i++)
    {
        if(word1.at(i)>=UP_A&&word1.at(i)<=UP_Z)
        {
            lower1+=(word1.at(i)+32) ;
        }
        else
        {
            lower1+=word1.at(i);
        }
    }

    for(int i=0; i<word2.length(); i++)
    {
        if(word2.at(i)>=UP_A&&word2.at(i)<=UP_Z)
        {
            lower2+=(word2.at(i)+32) ;
        }
        else
        {
            lower2+=word2.at(i);
        }
    }
if(lower1==lower2)
{
    cout<<0;
}
else if(lower1>lower2)
{
    cout<<1;
}
else
    cout<<-1;
return 0;
}
