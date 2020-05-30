#include<bits/stdc++.h>
using namespace std;
vector<vector<int> > g;
int vis[10001];
map<int,int>mp;
   map<string, vector<string> > ad;
void print(map<string,string>pr,string last)
{
    int &u=mp[last];
    if(u!=last)
    {
        print(pr,u);
    }
    cout<<last[0];
}
void bfs(string f,string last)

{
    mp[f]=f;


}

int main()
{
    int t,m,n;
    string s1,s2;
    scanf("%d",&t);
    while(t--)
    {
        getline(cin,s1);

	g.clear();
	g.resize(n);

        scanf("%d%d",&m,&n);
        for(int i=0;i<m;i++)
        {
           cin>>s1>>s2;
           ad[s1].push_back(s2);
            ad[s2].push_back(s1);
        }
        for(int i=0;i<n;i++)
        {
            cin>>s1>>s2;
            bfs(s1,s2);
            print(s2);
        }


    }


    return 0;
}
