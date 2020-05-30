#include <bits/stdc++.h>

using namespace std;
const int N = 1e5, MOD = (1e9)+7;
int t, k, a, b;
long long mem[N+9];

long long solve(int n = (10)){
	if(!n)	return 1;
	long long &ret = mem[n];
	if(~ret)	return ret;
	return ret = solve(n-1)%MOD + (n>=k ? solve(n-k)%MOD : 0);
}

int main(){
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	scanf("%d %d", &t, &k);
	memset(mem, -1, sizeof mem);
	solve();
	for(int i=0;i<100;i++)
        cout<<mem[i]<<"\n";
	mem[0] = 0;
	for(int i =2 ; i <= 1e5; ++i)
		mem[i] += mem[i-1];
	while(t--){
		scanf("%d %d", &a, &b);
		printf("%lld\n", (mem[b]-mem[a-1])%MOD);
	}
	return 0;
}

