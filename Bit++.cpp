#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int sum=0,n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;
        if(s.compare("++X")==0||s.compare("X++")==0)
            sum++;
        else  if(s.compare("--X")==0||s.compare("X--")==0)
            sum--;
    }
    cout<<sum;


    return 0;
}
