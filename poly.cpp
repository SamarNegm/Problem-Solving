
 #include <bits/stdc++.h>
using namespace std;
string s;
int sum,sol;
bool vis[5]={1};
int main(){
	cin>>s;
	for(int i=0;i<s.size();++i){
		sum+=s[i]-'0';
		 cout<<sum<< "  "<<sum%3<<"  \n";
		if(vis[sum%3]){

			sum=0;
			vis[0]=1,vis[1]=vis[2]=0;
			++sol;
		}else vis[sum%3]=1;
	}
	printf("%d\n",sol);
	return 0;
}
