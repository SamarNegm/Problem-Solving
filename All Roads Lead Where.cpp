#include<bits/stdc++.h>
using namespace std;
map<string, vector<string> >mp;
map<string,string>pr;
void bfs(string f,string l)
{

    queue<string> q;
	pr[f]=f;
	q.push(f);
	while (!q.empty()&&!pr.count(l) ){
            string v = q.front();

		q.pop();

		for (size_t i = 0; i < mp[v].size(); i++)
			{
			    string &x=mp[v][i];
			    if(!pr.count(x))
                {
                    pr[x]=v;
                    q.push(x);
                }

			}
	}


}
void print(string v)
{
   const string &u = pr[v];
   if (u != v){

       print( u);
   }
   cout << v[0];

}
int main()
{
    int t,m,n;
    string s1,s2;
    scanf("%d",&t);
    while(t--)
    {

        scanf("%d%d",&m,&n);
        for(int i=0;i<m;i++)
        {
           cin>>s1>>s2;
           mp[s1].push_back(s2);
               mp[s2].push_back(s1);

        }
        for(int i=0;i<n;i++)
        {
            pr.clear();
            cin>>s1>>s2;
            bfs(s1,s2);
            print(s2);
            cout<<endl;
        }
        if(t)
cout<<endl;

    }


    return 0;
}
