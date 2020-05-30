#include<iostream>
#include<string>
#define UP_A 65
#define UP_Z 91
#define LOW_A 97
#define LOW_Z 122
using namespace std;
int main()
{
    int x;
    string fnl;
     string word ;
     string lower;
   cin>>word;

    for(int i=0; i<word.length(); i++)
    {
        if(word.at(i)>=UP_A&&word.at(i)<=UP_Z)
        {
            lower+=(word.at(i)+32) ;
        }
        else
        {
            lower+=word.at(i);
        }
    }


    x=lower.length();
 for (int i=0;i<x;i++)
 {
     if(lower.at(i)!='a'&&lower.at(i)!='e'&&lower.at(i)!='i'&&lower.at(i)!='o'&&lower.at(i)!='u'&&lower.at(i)!='y')

     std::cout<<"."<<lower.at(i);
 }
    return 0;
}
