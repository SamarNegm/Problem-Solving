#include<bits/stdc++.h>
using namespace std;
int m,t[21],ans,cur,n;
vector<int>best,sol;
 void calc(int i,int cur) {
        if(i==m) {
            if(cur > ans) {
                ans = cur;
                best.clear();
                for(int i=0;i<sol.size();i++ )
                    best.push_back(sol[i]);
            }
            return;
        }

        calc(i+1,cur); //skip track i

        if(t[i]+cur <= n) {
            sol.push_back(t[i]); //choses
            calc(i+1,cur+t[i]);
            sol.pop_back(); //backtrack
        }
    }
    int main()
    {


        while(scanf("%d%d",&n,&m)==2)
        {
            for(int i=0;i<m;i++)
                cin>>t[i];
            calc(0,0);
            int ans=0;
            for(int i=0;i<best.size();i++)
            {
                cout<<best[i]<<" ";
                ans+=best[i];

            }
            cout<<"sum:"<<ans<<"\n";


        }


        return 0;
    }
