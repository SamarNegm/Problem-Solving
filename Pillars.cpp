#include<iostream>
#include<vector>
#include<queue>
using namespace std;
vector<int>v;
queue<int>q;
long long a[100000000];

int main()
{
    int n,k,a,x;
cin>>n>>k;
    for(int i=0;i<n;i++)
            cin>>a[i];
    for(int i=0;i<n;i++)
    {


       if(i>0)
       {
           if(abs(a[i]-a[i-1])>=d)
            q.push(i)
            else if(a[i]<q.front())
            {
                q.pop();
                q.push(i);
            }
       }
       else
         q.push_back(i);
    }

    for(int i=0;i<q.size();i++)
        cout<<q.pop()<<" ";

    return 0;
}
