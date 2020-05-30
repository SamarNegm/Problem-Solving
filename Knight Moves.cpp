#include<bits/stdc++.h>
using namespace std;
int x[]= {-2,-2,2,2,1,-1,1,-1};
int y[]= {-1,1,-1,1,2,2,-2,-2};
int bfs(string cur, string l,int ans)
{
    queue<pair<string,int> >q;
    q.push( make_pair(cur,0));
    while(!q.empty())
    {
        pair<string,int >tmp= q.front();
        q.pop();
        if(tmp.first==l)
            return tmp.second;
        string t="";
        for(int i=0; i<8; i++)
        {
            int a=(tmp.first[0]-'a'+1+x[i]);
            int b= (tmp.first[1]-'0'+y[i]);
         t+=(char)(tmp.first[0]+x[i]);
             t+=(char)(tmp.first[1]+y[i]);

            if(a>=1&&a<=8&&b>=1&&b<=8)
            {
                q.push(make_pair(t,tmp.second+1));
                cout<<a<<" "<<b<<"      t    "<<tmp.second<<"\n";
            }
            t="";

        }


    }



}
int main()
{
    string s1,s2;
    while(cin>>s1>>s2)
    {
        cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<bfs(s1,s2,0)<<" knight moves."<<endl;
    }




    return 0;
}
