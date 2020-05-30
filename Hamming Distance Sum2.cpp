#include <bits/stdc++.h>

using namespace std;

string a,b;
deque<char> v;
int ans, cnt;
int main()
{
    cin>>a>>b;
    for(int i=0; i<b.size(); ++i)
    {
        v.push_back(b[i]);
        if(v.size() == a.size() )
        {
            cnt = 0;
            for(int j=0; j<v.size(); ++j)
                cnt += abs( v[j] - a[j] );
            ans += cnt;
             for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;
            v.pop_front();
             for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;

        }

    }
    for(int i=0;i<v.size();i++)
        cout<<v[i];
    cout<<endl;
    printf("%d\n",ans);
    return 0;
}
