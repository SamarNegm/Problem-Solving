#include<iostream>
using namespace std;
int main()
{
    int n,p=0,befor=0,after=0,place=0;
    cin>>n;
    int x[n];
    for(int i=0; i<n; i++)
    {
        cin>>x[i];

        if(x[i]>0)
        {
            p+=x[i];

        }
        else if(x[i]==-1&&p==0)
        {
            after++;

        }
        else if(x[i]==-1&&p>0)
        {
            p--;

        }

    }
    cout<<after;



    return 0;
}
